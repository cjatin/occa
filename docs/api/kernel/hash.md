
<h1 id="hash">
 <a href="#/api/kernel/hash" class="anchor">
   <span>hash</span>
  </a>
</h1>

<div class="signature">

<hr>

  <div class="definition-container">
    <div class="definition">
      <code><a href="#/api/hash_t">occa::hash_t</a> hash()</code>
      <div class="flex-spacing"></div>
      <a href="https://github.com/libocca/occa/blob/7d325d3f/include/occa/core/kernel.hpp#L221" target="_blank">Source</a>
    </div>
    <div class="description">

      <div class="section-header">Returns</div>
      <ul class="section-list">
        <li> ::: markdown The kernel [hash](/api/hash_t) ::: </li>
      </ul>
</div>
  </div>

  <hr>
</div>


<h2 id="description">
 <a href="#/api/kernel/hash?id=description" class="anchor">
   <span>Description</span>
  </a>
</h2>

Gets the [hash](/api/hash_t) of the kernel.
Two kernels should have the same hash if they were compiled with the same source
and setup with the same properties.