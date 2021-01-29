
<h1 id="malloc">
 <a href="#/api/device/malloc" class="anchor">
   <span>malloc</span>
  </a>
</h1>

<div class="signature">

<hr>

  <div class="definition-container">
    <div class="definition">
      <code><span class="token keyword">template</span> <<span class="token keyword">class</span> <span class="token keyword">T</span>>
<a href="#/api/memory/">occa::memory</a> malloc(<span class="token keyword">const</span> <span class="token keyword">dim_t</span> entries,
                    <span class="token keyword">const</span> <span class="token keyword">void</span> *src,
                    <span class="token keyword">const</span> <a href="#/api/json/">occa::json</a> &props)</code>
      <div class="flex-spacing"></div>
      <a href="https://github.com/libocca/occa/blob/7d325d3f/include/occa/core/device.hpp#L576" target="_blank">Source</a>
    </div>
    
  </div>

  <div class="definition-container">
    <div class="definition">
      <code><span class="token keyword">template</span> <<span class="token keyword">class</span> <span class="token keyword">T</span>>
<a href="#/api/memory/">occa::memory</a> malloc(<span class="token keyword">const</span> <span class="token keyword">dim_t</span> entries,
                    <span class="token keyword">const</span> <a href="#/api/memory/">occa::memory</a> src,
                    <span class="token keyword">const</span> <a href="#/api/json/">occa::json</a> &props)</code>
      <div class="flex-spacing"></div>
      <a href="https://github.com/libocca/occa/blob/7d325d3f/include/occa/core/device.hpp#L584" target="_blank">Source</a>
    </div>
    
  </div>

  <div class="definition-container">
    <div class="definition">
      <code><span class="token keyword">template</span> <<span class="token keyword">class</span> <span class="token keyword">T</span>>
<a href="#/api/memory/">occa::memory</a> malloc(<span class="token keyword">const</span> <span class="token keyword">dim_t</span> entries,
                    <span class="token keyword">const</span> <a href="#/api/json/">occa::json</a> &props)</code>
      <div class="flex-spacing"></div>
      <a href="https://github.com/libocca/occa/blob/7d325d3f/include/occa/core/device.hpp#L592" target="_blank">Source</a>
    </div>
    <div class="description">

      <div>
        ::: markdown Uses the templated type to determine the type and bytes. :::
      </div>

      <div class="section-header">Arguments</div>
      <ul class="section-list">
          
        <li>
          <strong>entries</strong>: ::: markdown The length of the allocated memory :::
        </li>


        <li>
          <strong>src</strong>: ::: markdown If non-`NULL`, copy the `src` contents to the newly allocated [occa::memory](/api/memory/) :::
        </li>


        <li>
          <strong>props</strong>: ::: markdown Backend-specific [properties](/api/json/) to describe allocation strategies :::
        </li>

      </ul>

      <div class="section-header">Returns</div>
      <ul class="section-list">
        <li> ::: markdown The allocated [occa::memory](/api/memory/) ::: </li>
      </ul>
</div>
  </div>

<hr>

  <div class="definition-container">
    <div class="definition">
      <code><a href="#/api/memory/">occa::memory</a> malloc(<span class="token keyword">const</span> <span class="token keyword">dim_t</span> entries,
                    <span class="token keyword">const</span> <a href="#/api/dtype_t">occa::dtype_t</a> &dtype,
                    <span class="token keyword">const</span> <span class="token keyword">void</span> *src,
                    <span class="token keyword">const</span> <a href="#/api/json/">occa::json</a> &props)</code>
      <div class="flex-spacing"></div>
      <a href="https://github.com/libocca/occa/blob/7d325d3f/include/occa/core/device.hpp#L616" target="_blank">Source</a>
    </div>
    
  </div>

  <div class="definition-container">
    <div class="definition">
      <code><a href="#/api/memory/">occa::memory</a> malloc(<span class="token keyword">const</span> <span class="token keyword">dim_t</span> entries,
                    <span class="token keyword">const</span> <a href="#/api/dtype_t">occa::dtype_t</a> &dtype,
                    <span class="token keyword">const</span> <a href="#/api/memory/">occa::memory</a> src,
                    <span class="token keyword">const</span> <a href="#/api/json/">occa::json</a> &props)</code>
      <div class="flex-spacing"></div>
      <a href="https://github.com/libocca/occa/blob/7d325d3f/include/occa/core/device.hpp#L624" target="_blank">Source</a>
    </div>
    
  </div>

  <div class="definition-container">
    <div class="definition">
      <code><a href="#/api/memory/">occa::memory</a> malloc(<span class="token keyword">const</span> <span class="token keyword">dim_t</span> entries,
                    <span class="token keyword">const</span> <a href="#/api/dtype_t">occa::dtype_t</a> &dtype,
                    <span class="token keyword">const</span> <a href="#/api/json/">occa::json</a> &props)</code>
      <div class="flex-spacing"></div>
      <a href="https://github.com/libocca/occa/blob/7d325d3f/include/occa/core/device.hpp#L632" target="_blank">Source</a>
    </div>
    <div class="description">

      <div>
        ::: markdown Same but takes a [occa::dtype_t](/api/dtype_t) rather than a template parameter. :::
      </div>

      <div class="section-header">Arguments</div>
      <ul class="section-list">
          
        <li>
          <strong>entries</strong>: ::: markdown The length of the allocated memory :::
        </li>


        <li>
          <strong>dtype</strong>: ::: markdown The [occa::dtype_t](/api/dtype_t) of what will be allocated, which defines the length of each entry :::
        </li>


        <li>
          <strong>src</strong>: ::: markdown If non-`NULL`, copy the `src` contents to the newly allocated [occa::memory](/api/memory/) :::
        </li>


        <li>
          <strong>props</strong>: ::: markdown Backend-specific [properties](/api/json/) to describe allocation strategies :::
        </li>

      </ul>

      <div class="section-header">Returns</div>
      <ul class="section-list">
        <li> ::: markdown The allocated [occa::memory](/api/memory/) ::: </li>
      </ul>
</div>
  </div>

  <hr>
</div>


<h2 id="description">
 <a href="#/api/device/malloc?id=description" class="anchor">
   <span>Description</span>
  </a>
</h2>

Allocates memory on the device and returns the [occa::memory](/api/memory/) handle.
If a `src` pointer is passed, its data will be automatically copied to the allocated [occa::memory](/api/memory/).

The `props` argument is dependent on the backend.
For example, we can pass the following on `CUDA` and `HIP` backends to use a shared host pointer:

```cpp
{"host", true}
```