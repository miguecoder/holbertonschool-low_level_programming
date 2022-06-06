<h1 class="gap">0x1A. C - Hash tables</h1>

  <div data-react-class="tags/Tags" data-react-props="{&quot;tags&quot;:[]}" data-react-cache-id="tags/Tags-0"></div>

  <ul class="list-group metadata" id="project-metadata">

    <li class="list-group-item">
      <i aria-hidden="true" class="fa fa-user  fa-fw"></i>
      By Julien Barbier
    </li>

    <li class="list-group-item">
      <i aria-hidden="true" class="fa fa-cogs  fa-fw"></i>
      Weight: 1
    </li>




      <li class="list-group-item">
        <i aria-hidden="true" class="fa fa-calendar  fa-fw"></i>
            Ongoing project - started <div data-react-class="common/DateTime" data-react-props="{&quot;showDate&quot;:true,&quot;showTime&quot;:false,&quot;value&quot;:&quot;2022-06-03T00:00:00.000-05:00&quot;}" data-react-cache-id="common/DateTime-0" class="d-inline-block"></div>, must end by <div data-react-class="common/DateTime" data-react-props="{&quot;showDate&quot;:true,&quot;showTime&quot;:false,&quot;value&quot;:&quot;2022-06-07T00:00:00.000-05:00&quot;}" data-react-cache-id="common/DateTime-0" class="d-inline-block"></div>
          - you're done with <span id="student_task_done_percentage">0</span>% of tasks.
      </li>

      <li class="list-group-item">
        <i aria-hidden="true" class="fa fa-check  fa-fw"></i>
        Checker was released at <div data-react-class="common/DateTime" data-react-props="{&quot;showDate&quot;:true,&quot;showTime&quot;:true,&quot;value&quot;:&quot;2022-06-05T00:00:00.000-05:00&quot;}" data-react-cache-id="common/DateTime-0" class="d-inline-block"></div>
      </li>


      <li class="list-group-item">
        <i aria-hidden="true" class="fa fa-check-square  fa-fw"></i>
        An auto review will be launched at the deadline
      </li>

</ul>




    <div id="project_id" style="display: none" data-project-id="253"></div>



      

      

      <div class="panel panel-default" id="project-description">
  <div class="panel-body">
    <h2>Resources</h2>

<p><strong>Read or watch</strong>:</p>

<ul>
<li><a href="/rltoken/uodWZz-2jyHReOeToaLNdQ" title="What is a HashTable Data Structure - Introduction to Hash Tables , Part 0" target="_blank">What is a HashTable Data Structure - Introduction to Hash Tables , Part 0</a> </li>
<li><a href="/rltoken/YiFi_oMjd9cZ4VepsS2RKQ" title="Hash function" target="_blank">Hash function</a> </li>
<li><a href="/rltoken/Kswyyb1f2JY3dn-3TEckUQ" title="Hash table" target="_blank">Hash table</a> </li>
</ul>

<h2>Learning Objectives</h2>

<p>At the end of this project, you are expected to be able to <a href="/rltoken/SmLa7_BRX2WRy6XHO9Ad_A" title="explain to anyone" target="_blank">explain to anyone</a>, <strong>without the help of Google</strong>:</p>

<h3>General</h3>

<ul>
<li>What is a hash function</li>
<li>What makes a good hash function</li>
<li>What is a hash table, how do they work and how to use them</li>
<li>What is a collision and what are the main ways of dealing with collisions in the context of a hash table</li>
<li>What are the advantages and drawbacks of using hash tables</li>
<li>What are the most common use cases of hash tables</li>
</ul>

<h2>Requirements</h2>

<h3>General</h3>

<ul>
<li>Allowed editors: <code>vi</code>, <code>vim</code>, <code>emacs</code></li>
<li>All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89</li>
<li>All your files should end with a new line</li>
<li>A <code>README.md</code> file, at the root of the folder of the project is mandatory</li>
<li>Your code should use the <code>Betty</code> style. It will be checked using <a href="https://github.com/holbertonschool/Betty/blob/master/betty-style.pl" title="betty-style.pl" target="_blank">betty-style.pl</a> and <a href="https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl" title="betty-doc.pl" target="_blank">betty-doc.pl</a></li>
<li>You are not allowed to use global variables</li>
<li>No more than 5 functions per file</li>
<li>You are allowed to use the C standard library</li>
<li>The prototypes of all your functions should be included in your header file called <code>hash_tables.h</code></li>
<li>Don&rsquo;t forget to push your header file</li>
<li>All your header files should be include guarded</li>
</ul>

<h2>More Info</h2>

<h3>Data Structures</h3>

<p>Please use these data structures for this project:</p>

<pre><code>/**
 * struct hash_node_s - Node of a hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 */
typedef struct hash_node_s
{
     char *key;
     char *value;
     struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 */
typedef struct hash_table_s
{
     unsigned long int size;
     hash_node_t **array;
} hash_table_t;
</code></pre>

<h3>Tests</h3>

<p>We strongly encourage you to work all together on a set of tests</p>

<h3>Python Dictionaries</h3>

<p>Python dictionaries are implemented using hash tables. When you will be done with this project, you will be able to better understand the power and simplicity of Python dictionaries. So much is actually happening when you type <code>d = {&#39;a&#39;: 1, &#39;b&#39;: 2}</code>, but everything looks so simple for the user. Python doesn&rsquo;t use the exact same implementation than the one you will work on today though. If you are curious on how it works under the hood, here is a good blog post about <a href="/rltoken/xbVAHxQXggTizbyADfqVHA" title="how dictionaries are implemented in Python 2.7" target="_blank">how dictionaries are implemented in Python 2.7</a> (not mandatory).</p>

<p>Note that all dictionaries are not implemented using hash tables and there is a difference between a dictionary and a hash table. <a href="/rltoken/KqbaAcY0JIUDHcP-AcILhA" title="Read more here" target="_blank">Read more here</a> (not mandatory).</p>

  </div>
</div>


      

      

        
          <h2 class="gap">Tasks</h2>

    <div data-role="task1233" data-position="1" id="task-num-0">
      <div class="panel panel-default task-card " id="task-1233">
  <span id="user_id" data-id="4520"></span>

  <div class="panel-heading panel-heading-actions">
    <h3 class="panel-title">
      0. &gt;&gt;&gt; ht = {}
    </h3>

    <div>
        <span class="label label-info">
          mandatory
        </span>
    </div>
  </div>

  <div class="panel-body">
    <span id="user_id" data-id="4520"></span>

    <!-- Progress vs Score -->

    <!-- Task Body -->
    <p>Write a function that creates a hash table.</p>

<ul>
<li>Prototype: <code>hash_table_t *hash_table_create(unsigned long int size);</code>

<ul>
<li>where <code>size</code> is the size of the array</li>
</ul></li>
<li>Returns a pointer to the newly created hash table</li>
<li>If something went wrong, your function should return <code>NULL</code></li>
</ul>

<pre><code>julien@ubuntu:~/0x1A. Hash tables$ cat 0-main.c 
#include &lt;stdlib.h&gt;
#include &lt;string.h&gt;
#include &lt;stdio.h&gt;
#include &quot;hash_tables.h&quot;

/**
 * main - check the code for
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;

    ht = hash_table_create(1024);
    printf(&quot;%p\n&quot;, (void *)ht);
    return (EXIT_SUCCESS);
}
julien@ubuntu:~/0x1A. Hash tables$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-hash_table_create.c -o a
julien@ubuntu:~/0x1A. Hash tables$ ./a 
0x238a010
julien@ubuntu:~/0x1A. Hash tables$ valgrind ./a
==7602== Memcheck, a memory error detector
==7602== Copyright (C) 2002-2013, and GNU GPL&#39;d, by Julian Seward et al.
==7602== Using Valgrind-3.10.1 and LibVEX; rerun with -h for copyright info
==7602== Command: ./a
==7602== 
0x51fc040
==7602== 
==7602== HEAP SUMMARY:
==7602==     in use at exit: 8,208 bytes in 2 blocks
==7602==   total heap usage: 2 allocs, 0 frees, 8,208 bytes allocated
==7602== 
==7602== LEAK SUMMARY:
==7602==    definitely lost: 16 bytes in 1 blocks
==7602==    indirectly lost: 8,192 bytes in 1 blocks
==7602==      possibly lost: 0 bytes in 0 blocks
==7602==    still reachable: 0 bytes in 0 blocks
==7602==         suppressed: 0 bytes in 0 blocks
==7602== Rerun with --leak-check=full to see details of leaked memory
==7602== 
==7602== For counts of detected and suppressed errors, rerun with: -v
==7602== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
julien@ubuntu:~/0x1A. Hash tables$
</code></pre>

  </div>

  <div class="list-group">
<h3 class="panel-title">
      1. djb2
    </h3>

    <div>
        <span class="label label-info">
          mandatory
        </span>
    </div>
  </div>

  <div class="panel-body">
    <span id="user_id" data-id="4520"></span>

    <!-- Progress vs Score -->

    <!-- Task Body -->
    <p>Write a hash function implementing the djb2 algorithm.</p>

<ul>
<li>Prototype: <code>unsigned long int hash_djb2(const unsigned char *str);</code></li>
<li>You are allowed to copy and paste the function from <a href="/rltoken/Nsj5LPU4R0BzDhyziyukYg" title="this page" target="_blank">this page</a></li>
</ul>

<pre><code>julien@ubuntu:~/0x1A. Hash tables$ cat 1-djb2.c 
unsigned long int hash_djb2(const unsigned char *str)
{
    unsigned long int hash;
    int c;

    hash = 5381;
    while ((c = *str++))
    {
        hash = ((hash &lt;&lt; 5) + hash) + c; /* hash * 33 + c */
    }
    return (hash);
}
julien@ubuntu:~/0x1A. Hash tables$ 
julien@ubuntu:~/0x1A. Hash tables$ cat 1-main.c 
#include &lt;stdlib.h&gt;
#include &lt;string.h&gt;
#include &lt;stdio.h&gt;
#include &quot;hash_tables.h&quot;

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    char *s;

    s = &quot;cisfun&quot;;
    printf(&quot;%lu\n&quot;, hash_djb2((unsigned char *)s));
    s = &quot;Don&#39;t forget to tweet today&quot;;
    printf(&quot;%lu\n&quot;, hash_djb2((unsigned char *)s));
    s = &quot;98&quot;;
    printf(&quot;%lu\n&quot;, hash_djb2((unsigned char *)s));
    return (EXIT_SUCCESS);
}
julien@ubuntu:~/0x1A. Hash tables$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-djb2.c -o b
julien@ubuntu:~/0x1A. Hash tables$ ./b 
6953392314605
3749890792216096085
5861846
julien@ubuntu:~/0x1A. Hash tables$ 
</code></pre>

  </div>

  <div class="list-group">
<h3 class="panel-title">
      2. key -&gt; index
    </h3>

    <div>
        <span class="label label-info">
          mandatory
        </span>
    </div>
  </div>

  <div class="panel-body">
    <span id="user_id" data-id="4520"></span>

    <!-- Progress vs Score -->

    <!-- Task Body -->
    <p>Write a function that gives you the index of a key.</p>

<ul>
<li>Prototype: <code>unsigned long int key_index(const unsigned char *key, unsigned long int size);</code>

<ul>
<li>where <code>key</code> is the key</li>
<li>and <code>size</code> is the size of the array of the hash table</li>
</ul></li>
<li>This function should use the <code>hash_djb2</code> function that you wrote earlier</li>
<li>Returns the index at which the key/value pair should be stored in the array of the hash table</li>
<li>You will have to use this hash function for all the next tasks</li>
</ul>

<pre><code>julien@ubuntu:~/0x1A. Hash tables$ cat 2-main.c 
#include &lt;stdlib.h&gt;
#include &lt;string.h&gt;
#include &lt;stdio.h&gt;
#include &quot;hash_tables.h&quot;

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    char *s;
    unsigned long int hash_table_array_size;

    hash_table_array_size = 1024;
    s = &quot;cisfun&quot;;
    printf(&quot;%lu\n&quot;, hash_djb2((unsigned char *)s));
    printf(&quot;%lu\n&quot;, key_index((unsigned char *)s, hash_table_array_size));
    s = &quot;Don&#39;t forget to tweet today&quot;;
    printf(&quot;%lu\n&quot;, hash_djb2((unsigned char *)s));
    printf(&quot;%lu\n&quot;, key_index((unsigned char *)s, hash_table_array_size));
    s = &quot;98&quot;;
    printf(&quot;%lu\n&quot;, hash_djb2((unsigned char *)s));
    printf(&quot;%lu\n&quot;, key_index((unsigned char *)s, hash_table_array_size));  
    return (EXIT_SUCCESS);
}
julien@ubuntu:~/0x1A. Hash tables$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 1-djb2.c 2-key_index.c -o c
julien@ubuntu:~/0x1A. Hash tables$ ./c 
6953392314605
237
3749890792216096085
341
5861846
470
julien@ubuntu:~/0x1A. Hash tables$ 
</code></pre>

  </div>

  <div class="list-group">

  <h3 class="panel-title">
      3. &gt;&gt;&gt; ht[&#39;betty&#39;] = &#39;cool&#39;
    </h3>

    <div>
        <span class="label label-info">
          mandatory
        </span>
    </div>
  </div>

  <div class="panel-body">
    <span id="user_id" data-id="4520"></span>

    <!-- Progress vs Score -->

    <!-- Task Body -->
    <p>Write a function that adds an element to the hash table.</p>

<ul>
<li>Prototype: <code>int hash_table_set(hash_table_t *ht, const char *key, const char *value);</code>

<ul>
<li>Where <code>ht</code> is the hash table you want to add or update the key/value to</li>
<li><code>key</code> is the key. <code>key</code> can not be an empty string</li>
<li>and <code>value</code> is the value associated with the key. <code>value</code> must be duplicated. <code>value</code> can be an empty string</li>
</ul></li>
<li>Returns: <code>1</code> if it succeeded, <code>0</code> otherwise</li>
<li>In case of collision, add the new node at the beginning of the list</li>
</ul>

<pre><code>julien@ubuntu:~/0x1A. Hash tables$ cat 3-main.c 
#include &lt;stdlib.h&gt;
#include &lt;string.h&gt;
#include &lt;stdio.h&gt;
#include &quot;hash_tables.h&quot;

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;

    ht = hash_table_create(1024);
    hash_table_set(ht, &quot;betty&quot;, &quot;cool&quot;);
    return (EXIT_SUCCESS);
}
julien@ubuntu:~/0x1A. Hash tables$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 0-hash_table_create.c 1-djb2.c 2-key_index.c 3-hash_table_set.c -o d
julien@ubuntu:~/0x1A. Hash tables$
</code></pre>

<p>If you want to test for collisions, here are some strings that collide using the djb2 algorithm:</p>

<ul>
<li><strong>hetairas</strong> collides with <strong>mentioner</strong></li>
<li><strong>heliotropes</strong> collides with <strong>neurospora</strong></li>
<li><strong>depravement</strong> collides with <strong>serafins</strong></li>
<li><strong>stylist</strong> collides with <strong>subgenera</strong></li>
<li><strong>joyful</strong> collides with <strong>synaphea</strong></li>
<li><strong>redescribed</strong> collides with <strong>urites</strong></li>
<li><strong>dram</strong> collides with <strong>vivency</strong></li>
</ul>

  </div>

  <div class="list-group">
<h3 class="panel-title">
      4. &gt;&gt;&gt; ht[&#39;betty&#39;]
    </h3>

    <div>
        <span class="label label-info">
          mandatory
        </span>
    </div>
  </div>

  <div class="panel-body">
    <span id="user_id" data-id="4520"></span>

    <!-- Progress vs Score -->

    <!-- Task Body -->
    <p>Write a function that retrieves a value associated with a key.</p>

<ul>
<li>Prototype: <code>char *hash_table_get(const hash_table_t *ht, const char *key);</code>

<ul>
<li>where <code>ht</code> is the hash table you want to look into</li>
<li>and <code>key</code> is the key you are looking for</li>
</ul></li>
<li>Returns the value associated with the element, or <code>NULL</code> if <code>key</code> couldn&rsquo;t be found</li>
</ul>

<pre><code>julien@ubuntu:~/0x1A. Hash tables$ cat 4-main.c 
#include &lt;stdlib.h&gt;
#include &lt;string.h&gt;
#include &lt;stdio.h&gt;
#include &quot;hash_tables.h&quot;

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;
    char *value;

    ht = hash_table_create(1024);
    hash_table_set(ht, &quot;c&quot;, &quot;fun&quot;);
    hash_table_set(ht, &quot;python&quot;, &quot;awesome&quot;);
    hash_table_set(ht, &quot;Bob&quot;, &quot;and Kris love asm&quot;);
    hash_table_set(ht, &quot;N&quot;, &quot;queens&quot;);
    hash_table_set(ht, &quot;Asterix&quot;, &quot;Obelix&quot;);
    hash_table_set(ht, &quot;Betty&quot;, &quot;Cool&quot;);
    hash_table_set(ht, &quot;98&quot;, &quot;Battery Street&quot;);
    hash_table_set(ht, &quot;c&quot;, &quot;isfun&quot;);

    value = hash_table_get(ht, &quot;python&quot;);
    printf(&quot;%s:%s\n&quot;, &quot;python&quot;, value);
    value = hash_table_get(ht, &quot;Bob&quot;);
    printf(&quot;%s:%s\n&quot;, &quot;Bob&quot;, value);
    value = hash_table_get(ht, &quot;N&quot;);
    printf(&quot;%s:%s\n&quot;, &quot;N&quot;, value);
    value = hash_table_get(ht, &quot;Asterix&quot;);
    printf(&quot;%s:%s\n&quot;, &quot;Asterix&quot;, value);
    value = hash_table_get(ht, &quot;Betty&quot;);
    printf(&quot;%s:%s\n&quot;, &quot;Betty&quot;, value);
    value = hash_table_get(ht, &quot;98&quot;);
    printf(&quot;%s:%s\n&quot;, &quot;98&quot;, value);
    value = hash_table_get(ht, &quot;c&quot;);
    printf(&quot;%s:%s\n&quot;, &quot;c&quot;, value);
    value = hash_table_get(ht, &quot;javascript&quot;);
    printf(&quot;%s:%s\n&quot;, &quot;javascript&quot;, value);
    return (EXIT_SUCCESS);
}
julien@ubuntu:~/0x1A. Hash tables$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 0-hash_table_create.c 1-djb2.c 2-key_index.c 3-hash_table_set.c 4-hash_table_get.c -o e
julien@ubuntu:~/0x1A. Hash tables$ ./e 
python:awesome
Bob:and Kris love asm
N:queens
Asterix:Obelix
Betty:Cool
98:Battery Street
c:isfun
javascript:(null)
julien@ubuntu:~/0x1A. Hash tables$ 
</code></pre>

  </div>

  <div class="list-group">
  <h3 class="panel-title">
      5. &gt;&gt;&gt; print(ht)
    </h3>
<p>Write a function that prints a hash table.</p>

<ul>
<li>Prototype: <code>void hash_table_print(const hash_table_t *ht);</code>

<ul>
<li>where <code>ht</code> is the hash table</li>
</ul></li>
<li>You should print the key/value in the order that they appear in the array of hash table

<ul>
<li>Order: array, list</li>
</ul></li>
<li>Format: see example</li>
<li>If <code>ht</code> is NULL, don&rsquo;t print anything</li>
</ul>

<pre><code>julien@ubuntu:~/0x1A. Hash tables$ cat 5-main.c 
#include &lt;stdlib.h&gt;
#include &lt;string.h&gt;
#include &lt;stdio.h&gt;
#include &quot;hash_tables.h&quot;

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;

    ht = hash_table_create(1024);
    hash_table_print(ht);
    hash_table_set(ht, &quot;c&quot;, &quot;fun&quot;);
    hash_table_set(ht, &quot;python&quot;, &quot;awesome&quot;);
    hash_table_set(ht, &quot;Bob&quot;, &quot;and Kris love asm&quot;);
    hash_table_set(ht, &quot;N&quot;, &quot;queens&quot;);
    hash_table_set(ht, &quot;Asterix&quot;, &quot;Obelix&quot;);
    hash_table_set(ht, &quot;Betty&quot;, &quot;Cool&quot;);
    hash_table_set(ht, &quot;98&quot;, &quot;Battery Street&quot;);
    hash_table_print(ht);
    return (EXIT_SUCCESS);
}
julien@ubuntu:~/0x1A. Hash tables$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 0-hash_table_create.c 1-djb2.c 2-key_index.c 3-hash_table_set.c 4-hash_table_get.c 5-hash_table_print.c -o f
julien@ubuntu:~/0x1A. Hash tables$ ./f 
{}
{&#39;Betty&#39;: &#39;Cool&#39;, &#39;python&#39;: &#39;awesome&#39;, &#39;Bob&#39;: &#39;and Kris love asm&#39;, &#39;98&#39;: &#39;Battery Street&#39;, &#39;N&#39;: &#39;queens&#39;, &#39;c&#39;: &#39;fun&#39;, &#39;Asterix&#39;: &#39;Obelix&#39;}
julien@ubuntu:~/0x1A. Hash tables$ 
</code></pre>

  </div>

  <div class="list-group">

<h3 class="panel-title">
      6. &gt;&gt;&gt; del ht
    </h3>

    <div>
        <span class="label label-info">
          mandatory
        </span>
    </div>
  </div>

  <div class="panel-body">
    <span id="user_id" data-id="4520"></span>

    <!-- Progress vs Score -->

    <!-- Task Body -->
    <p>Write a function that deletes a hash table.</p>

<ul>
<li>Prototype: <code>void hash_table_delete(hash_table_t *ht);</code>

<ul>
<li>where <code>ht</code> is the hash table</li>
</ul></li>
</ul>

<pre><code>julien@ubuntu:~/0x1A. Hash tables$ cat 6-main.c 
#include &lt;stdlib.h&gt;
#include &lt;string.h&gt;
#include &lt;stdio.h&gt;
#include &quot;hash_tables.h&quot;

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;
    char *key;
    char *value;

    ht = hash_table_create(1024);
    hash_table_set(ht, &quot;c&quot;, &quot;fun&quot;);
    hash_table_set(ht, &quot;python&quot;, &quot;awesome&quot;);
    hash_table_set(ht, &quot;Bob&quot;, &quot;and Kris love asm&quot;);
    hash_table_set(ht, &quot;N&quot;, &quot;queens&quot;);
    hash_table_set(ht, &quot;Asterix&quot;, &quot;Obelix&quot;);
    hash_table_set(ht, &quot;Betty&quot;, &quot;Cool&quot;);
    hash_table_set(ht, &quot;98&quot;, &quot;Battery Streetz&quot;);
    key = strdup(&quot;Tim&quot;);
    value = strdup(&quot;Britton&quot;);
    hash_table_set(ht, key, value);
    key[0] = &#39;\0&#39;;
    value[0] = &#39;\0&#39;;
    free(key);
    free(value);
    hash_table_set(ht, &quot;98&quot;, &quot;Battery Street&quot;); 
    hash_table_set(ht, &quot;hetairas&quot;, &quot;Bob&quot;);
    hash_table_set(ht, &quot;hetairas&quot;, &quot;Bob Z&quot;);
    hash_table_set(ht, &quot;mentioner&quot;, &quot;Bob&quot;);
    hash_table_set(ht, &quot;hetairas&quot;, &quot;Bob Z Chu&quot;);
    hash_table_print(ht);
    hash_table_delete(ht);
    return (EXIT_SUCCESS);
}
julien@ubuntu:~/0x1A. Hash tables$ gcc -Wall -pedantic -Werror -Wextra 6-main.c 0-hash_table_create.c 1-djb2.c 2-key_index.c 3-hash_table_set.c 4-hash_table_get.c 5-hash_table_print.c 6-hash_table_delete.c -o g
julien@ubuntu:~/0x1A. Hash tables$ valgrind ./g
==6621== Memcheck, a memory error detector
==6621== Copyright (C) 2002-2013, and GNU GPL&#39;d, by Julian Seward et al.
==6621== Using Valgrind-3.10.1 and LibVEX; rerun with -h for copyright info
==6621== Command: ./g
==6621== 
{&#39;Betty&#39;: &#39;Cool&#39;, &#39;mentioner&#39;: &#39;Bob&#39;, &#39;hetairas&#39;: &#39;Bob Z Chu&#39;, &#39;python&#39;: &#39;awesome&#39;, &#39;Bob&#39;: &#39;and Kris love asm&#39;, &#39;98&#39;: &#39;Battery Street&#39;, &#39;N&#39;: &#39;queens&#39;, &#39;c&#39;: &#39;fun&#39;, &#39;Tim&#39;: &#39;Britton&#39;, &#39;Asterix&#39;: &#39;Obelix&#39;}
==6621== 
==6621== HEAP SUMMARY:
==6621==     in use at exit: 0 bytes in 0 blocks
==6621==   total heap usage: 37 allocs, 37 frees, 8,646 bytes allocated
==6621== 
==6621== All heap blocks were freed -- no leaks are possible
==6621== 
==6621== For counts of detected and suppressed errors, rerun with: -v
==6621== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
julien@ubuntu:~/0x1A. Hash tables$ 
</code></pre>

  </div>

  <div class="list-group">
<h4 class="modal-title">Markdown Guide</h4>
        </div>
        <div class="modal-body">
            <h4>Emphasis</h4>
<pre>**<strong>bold</strong>**
*<em>italics</em>*
~~<strike>strikethrough</strike>~~</pre>
<h4>Headers</h4>
<pre># Big header
## Medium header
### Small header
#### Tiny header</pre>
<h4>Lists</h4>
<pre>* Generic list item
* Generic list item
* Generic list item

1. Numbered list item
2. Numbered list item
3. Numbered list item</pre>
<h4>Links</h4>
<pre>[Text to display](http://www.example.com)</pre>
<h4>Quotes</h4>
<pre>> This is a quote.
> It can span multiple lines!</pre>
<h4>Images</h4>
<p>CSS style available: <code>width, height, opacity</code></p>
<pre>![](http://www.example.com/image.jpg)
![](http://www.example.com/image.jpg | width: 200px)
![](http://www.example.com/image.jpg | height: 124px | width: 80px | opacity: 0.6)
</pre>
<h4>Tables</h4>
<pre>| Column 1 | Column 2 | Column 3 |
| -------- | -------- | -------- |
| John     | Doe      | Male     |
| Mary     | Smith    | Female   |

<em>Or without aligning the columns...</em>

| Column 1 | Column 2 | Column 3 |
| -------- | -------- | -------- |
| John | Doe | Male |
| Mary | Smith | Female |
</pre>
<h4>Displaying code</h4>
<pre>`var example = "hello!";`

<em>Or spanning multiple lines...</em>

```
var example = "hello!";
alert(example);
```</pre>
</div>
</div>
</div>
</div>


<script>
(function(i,s,o,g,r,a,m){i['GoogleAnalyticsObject']=r;i[r]=i[r]||function(){
(i[r].q=i[r].q||[]).push(arguments)},i[r].l=1*new Date();a=s.createElement(o),
m=s.getElementsByTagName(o)[0];a.async=1;a.src=g;m.parentNode.insertBefore(a,m)
})(window,document,'script','//www.google-analytics.com/analytics.js','ga');

	ga('create',
	'UA-67152800-6',
	'auto', {
		userId: '4520'
	}
	);

ga('send', 'pageview');

$(document).ready(function() {
	ga(function(tracker) {
	var clientId = tracker.get('clientId');
	$('.ga-client-id').val(clientId);
	});
});
</script>
