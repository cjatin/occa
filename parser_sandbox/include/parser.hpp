/* The MIT License (MIT)
 *
 * Copyright (c) 2014-2018 David Medina and Tim Warburton
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 */
#ifndef OCCA_PARSER_PARSER_HEADER2
#define OCCA_PARSER_PARSER_HEADER2

#include <list>

#include "preprocessor.hpp"
#include "processingStages.hpp"
#include "statement.hpp"
#include "tokenizer.hpp"
#include "tokenContext.hpp"

namespace occa {
  namespace lang {
    typedef stream<token_t*>          tokenStream;
    typedef std::list<statement_t*>   statementList;
    typedef std::vector<attribute_t*> attributeVector;

    class parser_t {
    public:
      //---[ Stream ]-------------------
      tokenList inputCache;

      tokenStream stream;
      tokenizer_t tokenizer;
      preprocessor_t preprocessor;
      stringTokenMerger stringMerger;
      newlineTokenMerger newlineMerger;
      unknownTokenFilter unknownFilter;
      //================================

      //---[ Status ]-------------------
      blockStatement *root, *up;
      attributeVector attributes;
      tokenContext context;
      //================================

      parser_t();
      ~parser_t();

      void clear();

      void parseSource(const std::string &source);
      void parseFile(const std::string &filename);

      bool inputIsEmpty();
      token_t* getToken();

      void parse();

      void loadBlockStatement(blockStatement &smnt);

      void loadForStatement(forStatement &smnt);

      void loadWhileStatement(whileStatement &smnt);

      void loadIfStatement(ifStatement &smnt);
      void loadElseIfStatement(elifStatement &smnt);
      void loadElseStatement(elseStatement &smnt);

      void* getDeclaration();
      void* getExpression();
      void* getFunction();
      void* getAttribute();
    };
  }
}
#endif
