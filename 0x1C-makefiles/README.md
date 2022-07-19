<div class="project row">
  <div class="col-xs-12 col-md-10 col-lg-8 contains-images">

      <h1 class="gap">0x1C. C - Makefiles</h1>

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
            Ongoing project - started <div data-react-class="common/DateTime" data-react-props="{&quot;showDate&quot;:true,&quot;showTime&quot;:false,&quot;value&quot;:&quot;2022-07-18T00:00:00.000-05:00&quot;}" data-react-cache-id="common/DateTime-0" class="d-inline-block"></div>, must end by <div data-react-class="common/DateTime" data-react-props="{&quot;showDate&quot;:true,&quot;showTime&quot;:false,&quot;value&quot;:&quot;2022-07-19T00:00:00.000-05:00&quot;}" data-react-cache-id="common/DateTime-0" class="d-inline-block"></div>
          - you're done with <span id="student_task_done_percentage">0</span>% of tasks.
      </li>

      <li class="list-group-item">
        <i aria-hidden="true" class="fa fa-check  fa-fw"></i>
        Checker was released at <div data-react-class="common/DateTime" data-react-props="{&quot;showDate&quot;:true,&quot;showTime&quot;:true,&quot;value&quot;:&quot;2022-07-18T12:00:00.000-05:00&quot;}" data-react-cache-id="common/DateTime-0" class="d-inline-block"></div>
      </li>


      <li class="list-group-item">
        <i aria-hidden="true" class="fa fa-check-square  fa-fw"></i>
        An auto review will be launched at the deadline
      </li>

</ul>




    <div id="project_id" style="display: none" data-project-id="273"></div>



      

      

      <div class="panel panel-default" id="project-description">
  <div class="panel-body">
    <p><img src="https://s3.amazonaws.com/intranet-projects-files/holbertonschool-low_level_programming/273/giphy-2.gif" alt="" style="" /></p>

<p><br /></p>

<h2>Resources</h2>

<p><strong>Read or watch</strong>:</p>

<ul>
<li><a href="/rltoken/E3lCL-6xT3Qt_K38Tk4s_g" title="Makefile" target="_blank">Makefile</a> </li>
</ul>

<h2>Learning Objectives</h2>

<p>At the end of this project, you are expected to be able to <a href="/rltoken/TLlv9-qHJmXlUDbraWBW-g" title="explain to anyone" target="_blank">explain to anyone</a>, <strong>without the help of Google</strong>:</p>

<h3>General</h3>

<ul>
<li>What are <code>make</code>, Makefiles</li>
<li>When, why and how to use Makefiles</li>
<li>What are rules and how to set and use them</li>
<li>What are explicit and implicit rules</li>
<li>What are the most common / useful rules</li>
<li>What are variables and how to set and use them</li>
</ul>

<h2>Requirements</h2>

<h3>General</h3>

<ul>
<li>Allowed editors: <code>vi</code>, <code>vim</code>, <code>emacs</code></li>
<li>OS: Ubuntu 20.04 LTS</li>
<li>Version of <code>gcc</code>: 9.3.0</li>
<li>Version of <code>make</code>: GNU Make 4.2.1</li>
<li>All your files should end with a new line</li>
<li>A <code>README.md</code> file, at the root of the folder of the project, is mandatory</li>
</ul>

<h2>More Info</h2>

<h3>Files</h3>

<p>In the following tasks, we are going to use <a href="https://github.com/holbertonschool/0x1B.c" title="these files" target="_blank">these files</a>. We want to compile these only.</p>

  </div>
</div>


      

      

        
          <h2 class="gap">Tasks</h2>

    <div data-role="task1488" data-position="1" id="task-num-0">
      <div class="panel panel-default task-card " id="task-1488">
  <span id="user_id" data-id="4520"></span>

  <div class="panel-heading panel-heading-actions">
    <h3 class="panel-title">
      0. make -f 0-Makefile
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
    <p>Create your first Makefile.</p>

<p>Requirements:</p>

<ul>
<li>name of the executable: <code>school</code></li>
<li>rules: <code>all</code>

<ul>
<li>The <code>all</code> rule builds your executable</li>
</ul></li>
<li>variables: none</li>
</ul>

<pre><code>julien@ubuntu:~/0x1C. Makefiles$ make -f 0-Makefile 
gcc main.c school.c -o school
julien@ubuntu:~/0x1C. Makefiles$ ./school 
j#0000000000000000000000000000000000000
j#000000000000000000@Q**g00000000000000
j#0000000000000000*]++]4000000000000000
j#000000000000000k]++]++*N#000000000000
j#0000000000000*C+++]++]++]J*0000000000
j#00000000000@+]++qwwwp=]++++]*00000000
j#0000000000*+++]q#0000k+]+]++]4#000000
j#00000000*C+]+]w#0000*]+++]+]++0000000
j#0000we+]wW000***C++]++]+]++++40000000
j#000000000*C+]+]]+]++]++]++]+q#0000000
j#0000000*]+]+++++++]++]+++]+++J0000000
j#000000C++]=]+]+]+]++]++]+]+]+]=000000
j#00000k+]++]+++]+]++qwW0000000AgW00000
j#00000k++]++]+]+++qW#00000000000000000
j#00000A]++]++]++]++J**0000000000000000
j#000000e]++]+++]++]++]J000000000000000
j#0000000A]++]+]++]++]++000000000000000
j#000000000w]++]+]++]+qW#00000000000000
j#00000000000w]++++]*0##000000000000000
j#0000000000000Ag]+]++*0000000000000000
j#00000000000000000we]+]Q00000000000000
j#0000000000000@@+wgdA]+J00000000000000
j#0000000000000k?qwgdC=]4#0000000000000
j#00000000000000w]+]++qw#00000000000000
&quot;!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
julien@ubuntu:~/0x1C. Makefiles$ 
</code></pre>

  </div>

  <div class="list-group">
    <!-- Task URLs -->

    <!-- Github information -->
      <div class="list-group-item">
        <p><strong>Repo:</strong></p>
        <ul>
          <li>GitHub repository: <code>holbertonschool-low_level_programming</code></li>
            <li>Directory: <code>0x1C-makefiles</code></li>
            <li>File: <code>0-Makefile</code></li>
        </ul>
      </div>

    <!-- Self-paced manual review -->
  </div>

  <!-- Panel footer - Controls -->
  <div class="panel-footer">
      <div class="align-items-center d-flex justify-content-between">
        
<div>
    <button class="student_task_done btn btn-default btn-sm no" data-task-id="1488">
      <span class="no"><i aria-hidden="true" class="fa fa-square-o "></i></span>
      <span class="yes"><i aria-hidden="true" class="fa fa-check-square-o "></i></span>
      <span class="pending"><i aria-hidden="true" class="fa fa-spinner  fa-pulse"></i></span>
      Done<span class="no pending">?</span><span class="yes">!</span>
    </button>

    <button class="users_done_for_task btn btn-default btn-sm" data-task-id="1488" data-project-id="273" data-toggle="modal" data-target="#task-1488-users-done-modal">
      Help
    </button>
    <div class="modal fade users-done-modal" id="task-1488-users-done-modal" data-task-id="1488" data-project-id="273">
    <div class="modal-dialog">
        <div class="modal-content">
        <div class="modal-header">
            <button type="button" class="close" data-dismiss="modal" aria-label="Close"><span aria-hidden="true">&times;</span></button>
            <h4 class="modal-title">Students who are done with "0. make -f 0-Makefile"</h4>
        </div>
        <div class="modal-body">
            <div class="list-group">
            </div>
            <div class="spinner">
                <div class="bounce1"></div>
                <div class="bounce2"></div>
                <div class="bounce3"></div>
            </div>
            <div class="error"></div>
        </div>
        </div>
    </div>
</div>


      <button class="btn btn-default btn-sm" data-task-id="1488" data-toggle="modal" data-target="#task-test-correction-1488-correction-modal" id="task-num-0-check-code-btn">
          Check your code
      </button>
      <div class="modal fade task_correction_modal student_modal" id="task-test-correction-1488-correction-modal">
    <div class="modal-dialog">
        <div class="modal-content">
            <div class="modal-header">
                <button type="button" class="close" data-dismiss="modal" aria-label="Close"><span aria-hidden="true">&times;</span></button>
                <h4 class="modal-title">Correction of "0. make -f 0-Makefile"</h4>
            </div>
            <div class="modal-body">
                <div class="actions">
                    <center>
                        <div class="alert alert-info hidden"></div>

                        <button name="button" type="submit" class="btn btn-primary correction_request_test_send" data-task-id="1488">Start a new test</button>
                        <button class="btn btn-default close-modal hidden" data-dismiss="modal" type="button">Close</button>

                        <div class="spinner" style="display: none;">
                            <div class="bounce1"></div>
                            <div class="bounce2"></div>
                            <div class="bounce3"></div>
                        </div>
                        <div class="error"></div>
                        <div class="info"></div>


                    </center>
                </div>
                <div class="result"></div>

                <div class="help">
    <button data-task-id="1488">
        <i aria-hidden="true" class="fa fa-info-circle "></i>
    </button>
    <div class="help-container" data-task-id="1488">
        <div class="check-line">
            <div class="check-inline requirement success">
                  <i aria-hidden="true" class="fa fa-check-circle "></i>
                Requirement success
            </div>
            <div class="check-inline requirement fail">
                  <i aria-hidden="true" class="fa fa-times-circle "></i>
                Requirement fail
            </div>
        </div>
        <div class="check-line">
            <div class="check-inline code success">
                  <i aria-hidden="true" class="fa fa-check-circle "></i>
                Code success
            </div>
            <div class="check-inline code fail">
                  <i aria-hidden="true" class="fa fa-times-circle "></i>
                Code fail
            </div>
        </div>
        <div class="check-line">
            <div class="check-inline efficiency success">
                  <i aria-hidden="true" class="fa fa-check-circle "></i>
                Efficiency success
            </div>
            <div class="check-inline efficiency fail">
                  <i aria-hidden="true" class="fa fa-times-circle "></i>
                Efficiency fail
            </div>
        </div>
        <div class="check-line">
            <div class="check-inline answer success">
                  <i aria-hidden="true" class="fa fa-check-circle "></i>
                Text answer success
            </div>
            <div class="check-inline answer fail">
                  <i aria-hidden="true" class="fa fa-times-circle "></i>
                Text answer fail
            </div>
        </div>
        <div class="check-line">
            <div class="check-inline requirement fail offline">
                  <i aria-hidden="true" class="fa fa-times-circle "></i>
                Skipped - Previous check failed
            </div>
        </div>
    </div>
</div>

            </div>
        </div><!-- /.modal-content -->
    </div><!-- /.modal-dialog -->
</div>



    <button class="btn btn-default btn-sm" data-toggle="modal" data-target="#container-specs-modal"><i aria-hidden="true" class="fa fa-terminal "></i><span>Get a sandbox</span></button>

</div>


        <div class="fs-4">
        </div>
      </div>


  </div>
</div>

    </div>
    <div data-role="task1489" data-position="2" id="task-num-1">
      <div class="panel panel-default task-card " id="task-1489">
  <span id="user_id" data-id="4520"></span>

  <div class="panel-heading panel-heading-actions">
    <h3 class="panel-title">
      1. make -f 1-Makefile
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
    <p>Requirements:</p>

<ul>
<li>name of the executable: <code>school</code></li>
<li>rules: <code>all</code>

<ul>
<li>The <code>all</code> rule builds your executable</li>
</ul></li>
<li>variables: <code>CC</code>, <code>SRC</code>

<ul>
<li><code>CC</code>: the compiler to be used</li>
<li><code>SRC</code>: the <code>.c</code> files</li>
</ul></li>
</ul>

<pre><code>julien@ubuntu:~/0x1C. Makefiles$ make -f 1-Makefile
gcc main.c school.c -o school
julien@ubuntu:~/0x1C. Makefiles$ make -f 1-Makefile
gcc main.c school.c -o school
julien@ubuntu:~/0x1C. Makefiles$
</code></pre>

  </div>

  <div class="list-group">
    <!-- Task URLs -->

    <!-- Github information -->
      <div class="list-group-item">
        <p><strong>Repo:</strong></p>
        <ul>
          <li>GitHub repository: <code>holbertonschool-low_level_programming</code></li>
            <li>Directory: <code>0x1C-makefiles</code></li>
            <li>File: <code>1-Makefile</code></li>
        </ul>
      </div>

    <!-- Self-paced manual review -->
  </div>

  <!-- Panel footer - Controls -->
  <div class="panel-footer">
      <div class="align-items-center d-flex justify-content-between">
        
<div>
    <button class="student_task_done btn btn-default btn-sm no" data-task-id="1489">
      <span class="no"><i aria-hidden="true" class="fa fa-square-o "></i></span>
      <span class="yes"><i aria-hidden="true" class="fa fa-check-square-o "></i></span>
      <span class="pending"><i aria-hidden="true" class="fa fa-spinner  fa-pulse"></i></span>
      Done<span class="no pending">?</span><span class="yes">!</span>
    </button>

    <button class="users_done_for_task btn btn-default btn-sm" data-task-id="1489" data-project-id="273" data-toggle="modal" data-target="#task-1489-users-done-modal">
      Help
    </button>
    <div class="modal fade users-done-modal" id="task-1489-users-done-modal" data-task-id="1489" data-project-id="273">
    <div class="modal-dialog">
        <div class="modal-content">
        <div class="modal-header">
            <button type="button" class="close" data-dismiss="modal" aria-label="Close"><span aria-hidden="true">&times;</span></button>
            <h4 class="modal-title">Students who are done with "1. make -f 1-Makefile"</h4>
        </div>
        <div class="modal-body">
            <div class="list-group">
            </div>
            <div class="spinner">
                <div class="bounce1"></div>
                <div class="bounce2"></div>
                <div class="bounce3"></div>
            </div>
            <div class="error"></div>
        </div>
        </div>
    </div>
</div>


      <button class="btn btn-default btn-sm" data-task-id="1489" data-toggle="modal" data-target="#task-test-correction-1489-correction-modal" id="task-num-1-check-code-btn">
          Check your code
      </button>
      <div class="modal fade task_correction_modal student_modal" id="task-test-correction-1489-correction-modal">
    <div class="modal-dialog">
        <div class="modal-content">
            <div class="modal-header">
                <button type="button" class="close" data-dismiss="modal" aria-label="Close"><span aria-hidden="true">&times;</span></button>
                <h4 class="modal-title">Correction of "1. make -f 1-Makefile"</h4>
            </div>
            <div class="modal-body">
                <div class="actions">
                    <center>
                        <div class="alert alert-info hidden"></div>

                        <button name="button" type="submit" class="btn btn-primary correction_request_test_send" data-task-id="1489">Start a new test</button>
                        <button class="btn btn-default close-modal hidden" data-dismiss="modal" type="button">Close</button>

                        <div class="spinner" style="display: none;">
                            <div class="bounce1"></div>
                            <div class="bounce2"></div>
                            <div class="bounce3"></div>
                        </div>
                        <div class="error"></div>
                        <div class="info"></div>


                    </center>
                </div>
                <div class="result"></div>

                <div class="help">
    <button data-task-id="1489">
        <i aria-hidden="true" class="fa fa-info-circle "></i>
    </button>
    <div class="help-container" data-task-id="1489">
        <div class="check-line">
            <div class="check-inline requirement success">
                  <i aria-hidden="true" class="fa fa-check-circle "></i>
                Requirement success
            </div>
            <div class="check-inline requirement fail">
                  <i aria-hidden="true" class="fa fa-times-circle "></i>
                Requirement fail
            </div>
        </div>
        <div class="check-line">
            <div class="check-inline code success">
                  <i aria-hidden="true" class="fa fa-check-circle "></i>
                Code success
            </div>
            <div class="check-inline code fail">
                  <i aria-hidden="true" class="fa fa-times-circle "></i>
                Code fail
            </div>
        </div>
        <div class="check-line">
            <div class="check-inline efficiency success">
                  <i aria-hidden="true" class="fa fa-check-circle "></i>
                Efficiency success
            </div>
            <div class="check-inline efficiency fail">
                  <i aria-hidden="true" class="fa fa-times-circle "></i>
                Efficiency fail
            </div>
        </div>
        <div class="check-line">
            <div class="check-inline answer success">
                  <i aria-hidden="true" class="fa fa-check-circle "></i>
                Text answer success
            </div>
            <div class="check-inline answer fail">
                  <i aria-hidden="true" class="fa fa-times-circle "></i>
                Text answer fail
            </div>
        </div>
        <div class="check-line">
            <div class="check-inline requirement fail offline">
                  <i aria-hidden="true" class="fa fa-times-circle "></i>
                Skipped - Previous check failed
            </div>
        </div>
    </div>
</div>

            </div>
        </div><!-- /.modal-content -->
    </div><!-- /.modal-dialog -->
</div>



    <button class="btn btn-default btn-sm" data-toggle="modal" data-target="#container-specs-modal"><i aria-hidden="true" class="fa fa-terminal "></i><span>Get a sandbox</span></button>

</div>


        <div class="fs-4">
        </div>
      </div>


  </div>
</div>

    </div>
    <div data-role="task1490" data-position="3" id="task-num-2">
      <div class="panel panel-default task-card " id="task-1490">
  <span id="user_id" data-id="4520"></span>

  <div class="panel-heading panel-heading-actions">
    <h3 class="panel-title">
      2. make -f 2-Makefile
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
    <p>Create your first useful Makefile.</p>

<p>Requirements:</p>

<ul>
<li>name of the executable: <code>school</code></li>
<li>rules: <code>all</code>

<ul>
<li>The <code>all</code> rule builds your executable</li>
</ul></li>
<li>variables: <code>CC</code>, <code>SRC</code>, <code>OBJ</code>, <code>NAME</code>

<ul>
<li><code>CC</code>: the compiler to be used</li>
<li><code>SRC</code>: the <code>.c</code> files</li>
<li><code>OBJ</code>: the <code>.o</code> files</li>
<li><code>NAME</code>: the name of the executable</li>
</ul></li>
<li>The <code>all</code> rule should recompile only the updated source files</li>
<li>You are not allowed to have a list of all the <code>.o</code> files</li>
</ul>

<pre><code>julien@ubuntu:~/0x1C. Makefiles$ make -f 2-Makefile
gcc    -c -o main.o main.c
gcc    -c -o school.o school.c
gcc main.o school.o -o school
julien@ubuntu:~/0x1C. Makefiles$ make -f 2-Makefile
gcc main.o school.o -o school
julien@ubuntu:~/0x1C. Makefiles$ echo &quot;/* School */&quot; &gt;&gt; main.c
julien@ubuntu:~/0x1C. Makefiles$ make -f 2-Makefile
gcc    -c -o main.o main.c
gcc main.o school.o -o school
julien@ubuntu:~/0x1C. Makefiles$ 
</code></pre>

  </div>

  <div class="list-group">
    <!-- Task URLs -->

    <!-- Github information -->
      <div class="list-group-item">
        <p><strong>Repo:</strong></p>
        <ul>
          <li>GitHub repository: <code>holbertonschool-low_level_programming</code></li>
            <li>Directory: <code>0x1C-makefiles</code></li>
            <li>File: <code>2-Makefile</code></li>
        </ul>
      </div>

    <!-- Self-paced manual review -->
  </div>

  <!-- Panel footer - Controls -->
  <div class="panel-footer">
      <div class="align-items-center d-flex justify-content-between">
        
<div>
    <button class="student_task_done btn btn-default btn-sm no" data-task-id="1490">
      <span class="no"><i aria-hidden="true" class="fa fa-square-o "></i></span>
      <span class="yes"><i aria-hidden="true" class="fa fa-check-square-o "></i></span>
      <span class="pending"><i aria-hidden="true" class="fa fa-spinner  fa-pulse"></i></span>
      Done<span class="no pending">?</span><span class="yes">!</span>
    </button>

    <button class="users_done_for_task btn btn-default btn-sm" data-task-id="1490" data-project-id="273" data-toggle="modal" data-target="#task-1490-users-done-modal">
      Help
    </button>
    <div class="modal fade users-done-modal" id="task-1490-users-done-modal" data-task-id="1490" data-project-id="273">
    <div class="modal-dialog">
        <div class="modal-content">
        <div class="modal-header">
            <button type="button" class="close" data-dismiss="modal" aria-label="Close"><span aria-hidden="true">&times;</span></button>
            <h4 class="modal-title">Students who are done with "2. make -f 2-Makefile"</h4>
        </div>
        <div class="modal-body">
            <div class="list-group">
            </div>
            <div class="spinner">
                <div class="bounce1"></div>
                <div class="bounce2"></div>
                <div class="bounce3"></div>
            </div>
            <div class="error"></div>
        </div>
        </div>
    </div>
</div>


      <button class="btn btn-default btn-sm" data-task-id="1490" data-toggle="modal" data-target="#task-test-correction-1490-correction-modal" id="task-num-2-check-code-btn">
          Check your code
      </button>
      <div class="modal fade task_correction_modal student_modal" id="task-test-correction-1490-correction-modal">
    <div class="modal-dialog">
        <div class="modal-content">
            <div class="modal-header">
                <button type="button" class="close" data-dismiss="modal" aria-label="Close"><span aria-hidden="true">&times;</span></button>
                <h4 class="modal-title">Correction of "2. make -f 2-Makefile"</h4>
            </div>
            <div class="modal-body">
                <div class="actions">
                    <center>
                        <div class="alert alert-info hidden"></div>

                        <button name="button" type="submit" class="btn btn-primary correction_request_test_send" data-task-id="1490">Start a new test</button>
                        <button class="btn btn-default close-modal hidden" data-dismiss="modal" type="button">Close</button>

                        <div class="spinner" style="display: none;">
                            <div class="bounce1"></div>
                            <div class="bounce2"></div>
                            <div class="bounce3"></div>
                        </div>
                        <div class="error"></div>
                        <div class="info"></div>


                    </center>
                </div>
                <div class="result"></div>

                <div class="help">
    <button data-task-id="1490">
        <i aria-hidden="true" class="fa fa-info-circle "></i>
    </button>
    <div class="help-container" data-task-id="1490">
        <div class="check-line">
            <div class="check-inline requirement success">
                  <i aria-hidden="true" class="fa fa-check-circle "></i>
                Requirement success
            </div>
            <div class="check-inline requirement fail">
                  <i aria-hidden="true" class="fa fa-times-circle "></i>
                Requirement fail
            </div>
        </div>
        <div class="check-line">
            <div class="check-inline code success">
                  <i aria-hidden="true" class="fa fa-check-circle "></i>
                Code success
            </div>
            <div class="check-inline code fail">
                  <i aria-hidden="true" class="fa fa-times-circle "></i>
                Code fail
            </div>
        </div>
        <div class="check-line">
            <div class="check-inline efficiency success">
                  <i aria-hidden="true" class="fa fa-check-circle "></i>
                Efficiency success
            </div>
            <div class="check-inline efficiency fail">
                  <i aria-hidden="true" class="fa fa-times-circle "></i>
                Efficiency fail
            </div>
        </div>
        <div class="check-line">
            <div class="check-inline answer success">
                  <i aria-hidden="true" class="fa fa-check-circle "></i>
                Text answer success
            </div>
            <div class="check-inline answer fail">
                  <i aria-hidden="true" class="fa fa-times-circle "></i>
                Text answer fail
            </div>
        </div>
        <div class="check-line">
            <div class="check-inline requirement fail offline">
                  <i aria-hidden="true" class="fa fa-times-circle "></i>
                Skipped - Previous check failed
            </div>
        </div>
    </div>
</div>

            </div>
        </div><!-- /.modal-content -->
    </div><!-- /.modal-dialog -->
</div>



    <button class="btn btn-default btn-sm" data-toggle="modal" data-target="#container-specs-modal"><i aria-hidden="true" class="fa fa-terminal "></i><span>Get a sandbox</span></button>

</div>


        <div class="fs-4">
        </div>
      </div>


  </div>
</div>

    </div>
    <div data-role="task1491" data-position="4" id="task-num-3">
      <div class="panel panel-default task-card " id="task-1491">
  <span id="user_id" data-id="4520"></span>

  <div class="panel-heading panel-heading-actions">
    <h3 class="panel-title">
      3. make -f 3-Makefile
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
    <p>Requirements:</p>

<ul>
<li>name of the executable: <code>school</code></li>
<li>rules: <code>all</code>, <code>clean</code>, <code>oclean</code>, <code>fclean</code>, <code>re</code>

<ul>
<li><code>all</code>: builds your executable</li>
<li><code>clean</code>: deletes all Emacs and Vim temporary files along with the executable</li>
<li><code>oclean</code>: deletes the object files</li>
<li><code>fclean</code>: deletes all Emacs and Vim temporary files, the executable, and the object files</li>
<li><code>re</code>: forces recompilation of all source files</li>
</ul></li>
<li>variables: <code>CC</code>, <code>SRC</code>, <code>OBJ</code>, <code>NAME</code>, <code>RM</code>

<ul>
<li><code>CC</code>: the compiler to be used</li>
<li><code>SRC</code>: the <code>.c</code> files</li>
<li><code>OBJ</code>: the <code>.o</code> files</li>
<li><code>NAME</code>: the name of the executable</li>
<li><code>RM</code>: the program to delete files</li>
</ul></li>
<li>The <code>all</code> rule should recompile only the updated source files</li>
<li>The <code>clean</code>, <code>oclean</code>, <code>fclean</code>, <code>re</code> rules should never fail</li>
<li>You are not allowed to have a list of all the <code>.o</code> files</li>
</ul>

<pre><code>julien@ubuntu:~//0x1C. Makefiles$ ls -1
0-Makefile
1-Makefile
2-Makefile
3-Makefile
school.c
main.c
main.c~
m.h
julien@ubuntu:~/0x1C. Makefiles$ make -f 3-Makefile
gcc    -c -o main.o main.c
gcc    -c -o school.o school.c
gcc main.o school.o -o school
julien@ubuntu:~/0x1C. Makefiles$ make all -f 3-Makefile
gcc main.o school.o -o school
julien@ubuntu:~/0x1C. Makefiles$ ls -1
0-Makefile
1-Makefile
2-Makefile
3-Makefile
school
school.c
school.o
main.c
main.c~
main.o
m.h
julien@ubuntu:~/0x1C. Makefiles$ make clean -f 3-Makefile 
rm -f *~ school
julien@ubuntu:~/0x1C. Makefiles$ make oclean -f 3-Makefile 
rm -f main.o school.o
julien@ubuntu:~/0x1C. Makefiles$ make fclean -f 3-Makefile 
rm -f *~ school
rm -f main.o school.o
julien@ubuntu:~/0x1C. Makefiles$ make all -f 3-Makefile
gcc    -c -o main.o main.c
gcc    -c -o school.o school.c
gcc main.o school.o -o school
julien@ubuntu:~/0x1C. Makefiles$ make all -f 3-Makefile
gcc main.o school.o -o school
julien@ubuntu:~/0x1C. Makefiles$ make re -f 3-Makefile
rm -f main.o school.o
gcc    -c -o main.o main.c
gcc    -c -o school.o school.c
gcc main.o school.o -o school
julien@ubuntu:~/0x1C. Makefiles$ 
</code></pre>

  </div>

  <div class="list-group">
    <!-- Task URLs -->

    <!-- Github information -->
      <div class="list-group-item">
        <p><strong>Repo:</strong></p>
        <ul>
          <li>GitHub repository: <code>holbertonschool-low_level_programming</code></li>
            <li>Directory: <code>0x1C-makefiles</code></li>
            <li>File: <code>3-Makefile</code></li>
        </ul>
      </div>

    <!-- Self-paced manual review -->
  </div>

  <!-- Panel footer - Controls -->
  <div class="panel-footer">
      <div class="align-items-center d-flex justify-content-between">
        
<div>
    <button class="student_task_done btn btn-default btn-sm no" data-task-id="1491">
      <span class="no"><i aria-hidden="true" class="fa fa-square-o "></i></span>
      <span class="yes"><i aria-hidden="true" class="fa fa-check-square-o "></i></span>
      <span class="pending"><i aria-hidden="true" class="fa fa-spinner  fa-pulse"></i></span>
      Done<span class="no pending">?</span><span class="yes">!</span>
    </button>

    <button class="users_done_for_task btn btn-default btn-sm" data-task-id="1491" data-project-id="273" data-toggle="modal" data-target="#task-1491-users-done-modal">
      Help
    </button>
    <div class="modal fade users-done-modal" id="task-1491-users-done-modal" data-task-id="1491" data-project-id="273">
    <div class="modal-dialog">
        <div class="modal-content">
        <div class="modal-header">
            <button type="button" class="close" data-dismiss="modal" aria-label="Close"><span aria-hidden="true">&times;</span></button>
            <h4 class="modal-title">Students who are done with "3. make -f 3-Makefile"</h4>
        </div>
        <div class="modal-body">
            <div class="list-group">
            </div>
            <div class="spinner">
                <div class="bounce1"></div>
                <div class="bounce2"></div>
                <div class="bounce3"></div>
            </div>
            <div class="error"></div>
        </div>
        </div>
    </div>
</div>


      <button class="btn btn-default btn-sm" data-task-id="1491" data-toggle="modal" data-target="#task-test-correction-1491-correction-modal" id="task-num-3-check-code-btn">
          Check your code
      </button>
      <div class="modal fade task_correction_modal student_modal" id="task-test-correction-1491-correction-modal">
    <div class="modal-dialog">
        <div class="modal-content">
            <div class="modal-header">
                <button type="button" class="close" data-dismiss="modal" aria-label="Close"><span aria-hidden="true">&times;</span></button>
                <h4 class="modal-title">Correction of "3. make -f 3-Makefile"</h4>
            </div>
            <div class="modal-body">
                <div class="actions">
                    <center>
                        <div class="alert alert-info hidden"></div>

                        <button name="button" type="submit" class="btn btn-primary correction_request_test_send" data-task-id="1491">Start a new test</button>
                        <button class="btn btn-default close-modal hidden" data-dismiss="modal" type="button">Close</button>

                        <div class="spinner" style="display: none;">
                            <div class="bounce1"></div>
                            <div class="bounce2"></div>
                            <div class="bounce3"></div>
                        </div>
                        <div class="error"></div>
                        <div class="info"></div>


                    </center>
                </div>
                <div class="result"></div>

                <div class="help">
    <button data-task-id="1491">
        <i aria-hidden="true" class="fa fa-info-circle "></i>
    </button>
    <div class="help-container" data-task-id="1491">
        <div class="check-line">
            <div class="check-inline requirement success">
                  <i aria-hidden="true" class="fa fa-check-circle "></i>
                Requirement success
            </div>
            <div class="check-inline requirement fail">
                  <i aria-hidden="true" class="fa fa-times-circle "></i>
                Requirement fail
            </div>
        </div>
        <div class="check-line">
            <div class="check-inline code success">
                  <i aria-hidden="true" class="fa fa-check-circle "></i>
                Code success
            </div>
            <div class="check-inline code fail">
                  <i aria-hidden="true" class="fa fa-times-circle "></i>
                Code fail
            </div>
        </div>
        <div class="check-line">
            <div class="check-inline efficiency success">
                  <i aria-hidden="true" class="fa fa-check-circle "></i>
                Efficiency success
            </div>
            <div class="check-inline efficiency fail">
                  <i aria-hidden="true" class="fa fa-times-circle "></i>
                Efficiency fail
            </div>
        </div>
        <div class="check-line">
            <div class="check-inline answer success">
                  <i aria-hidden="true" class="fa fa-check-circle "></i>
                Text answer success
            </div>
            <div class="check-inline answer fail">
                  <i aria-hidden="true" class="fa fa-times-circle "></i>
                Text answer fail
            </div>
        </div>
        <div class="check-line">
            <div class="check-inline requirement fail offline">
                  <i aria-hidden="true" class="fa fa-times-circle "></i>
                Skipped - Previous check failed
            </div>
        </div>
    </div>
</div>

            </div>
        </div><!-- /.modal-content -->
    </div><!-- /.modal-dialog -->
</div>



    <button class="btn btn-default btn-sm" data-toggle="modal" data-target="#container-specs-modal"><i aria-hidden="true" class="fa fa-terminal "></i><span>Get a sandbox</span></button>

</div>


        <div class="fs-4">
        </div>
      </div>


  </div>
</div>

    </div>
    <div data-role="task1492" data-position="5" id="task-num-4">
      <div class="panel panel-default task-card " id="task-1492">
  <span id="user_id" data-id="4520"></span>

  <div class="panel-heading panel-heading-actions">
    <h3 class="panel-title">
      4. A complete Makefile
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
    <p>Requirements:</p>

<ul>
<li>name of the executable: <code>school</code></li>
<li>rules: <code>all</code>, <code>clean</code>, <code>fclean</code>, <code>oclean</code>, <code>re</code>

<ul>
<li><code>all</code>: builds your executable</li>
<li><code>clean</code>: deletes all Emacs and Vim temporary files along with the executable</li>
<li><code>oclean</code>: deletes the object files</li>
<li><code>fclean</code>: deletes all Emacs and Vim temporary files, the executable, and the object files</li>
<li><code>re</code>: forces recompilation of all source files</li>
</ul></li>
<li>variables: <code>CC</code>, <code>SRC</code>, <code>OBJ</code>, <code>NAME</code>, <code>RM</code>, <code>CFLAGS</code>

<ul>
<li><code>CC</code>: the compiler to be used</li>
<li><code>SRC</code>: the <code>.c</code> files</li>
<li><code>OBJ</code>: the <code>.o</code> files</li>
<li><code>NAME</code>: the name of the executable</li>
<li><code>RM</code>: the program to delete files</li>
<li><code>CFLAGS</code>: your favorite compiler flags: <code>-Wall -Werror -Wextra -pedantic</code></li>
</ul></li>
<li>The <code>all</code> rule should recompile only the updated source files</li>
<li><p>The <code>clean</code>, <code>oclean</code>, <code>fclean</code>, <code>re</code> rules should never fail</p></li>
<li><p>You are not allowed to have a list of all the <code>.o</code> files</p></li>
</ul>

<pre><code>julien@ubuntu:~/0x1C. Makefiles$ make all -f 4-Makefile
gcc -Wall -Werror -Wextra -pedantic   -c -o main.o main.c
gcc -Wall -Werror -Wextra -pedantic   -c -o school.o school.c
gcc main.o school.o -o school
julien@ubuntu:~/0x1C. Makefiles$ 
</code></pre>

  </div>

  <div class="list-group">
    <!-- Task URLs -->

    <!-- Github information -->
      <div class="list-group-item">
        <p><strong>Repo:</strong></p>
        <ul>
          <li>GitHub repository: <code>holbertonschool-low_level_programming</code></li>
            <li>Directory: <code>0x1C-makefiles</code></li>
            <li>File: <code>4-Makefile</code></li>
        </ul>
      </div>

    <!-- Self-paced manual review -->
  </div>

  <!-- Panel footer - Controls -->
  <div class="panel-footer">
      <div class="align-items-center d-flex justify-content-between">
        
<div>
    <button class="student_task_done btn btn-default btn-sm no" data-task-id="1492">
      <span class="no"><i aria-hidden="true" class="fa fa-square-o "></i></span>
      <span class="yes"><i aria-hidden="true" class="fa fa-check-square-o "></i></span>
      <span class="pending"><i aria-hidden="true" class="fa fa-spinner  fa-pulse"></i></span>
      Done<span class="no pending">?</span><span class="yes">!</span>
    </button>

    <button class="users_done_for_task btn btn-default btn-sm" data-task-id="1492" data-project-id="273" data-toggle="modal" data-target="#task-1492-users-done-modal">
      Help
    </button>
    <div class="modal fade users-done-modal" id="task-1492-users-done-modal" data-task-id="1492" data-project-id="273">
    <div class="modal-dialog">
        <div class="modal-content">
        <div class="modal-header">
            <button type="button" class="close" data-dismiss="modal" aria-label="Close"><span aria-hidden="true">&times;</span></button>
            <h4 class="modal-title">Students who are done with "4. A complete Makefile"</h4>
        </div>
        <div class="modal-body">
            <div class="list-group">
            </div>
            <div class="spinner">
                <div class="bounce1"></div>
                <div class="bounce2"></div>
                <div class="bounce3"></div>
            </div>
            <div class="error"></div>
        </div>
        </div>
    </div>
</div>


      <button class="btn btn-default btn-sm" data-task-id="1492" data-toggle="modal" data-target="#task-test-correction-1492-correction-modal" id="task-num-4-check-code-btn">
          Check your code
      </button>
      <div class="modal fade task_correction_modal student_modal" id="task-test-correction-1492-correction-modal">
    <div class="modal-dialog">
        <div class="modal-content">
            <div class="modal-header">
                <button type="button" class="close" data-dismiss="modal" aria-label="Close"><span aria-hidden="true">&times;</span></button>
                <h4 class="modal-title">Correction of "4. A complete Makefile"</h4>
            </div>
            <div class="modal-body">
                <div class="actions">
                    <center>
                        <div class="alert alert-info hidden"></div>

                        <button name="button" type="submit" class="btn btn-primary correction_request_test_send" data-task-id="1492">Start a new test</button>
                        <button class="btn btn-default close-modal hidden" data-dismiss="modal" type="button">Close</button>

                        <div class="spinner" style="display: none;">
                            <div class="bounce1"></div>
                            <div class="bounce2"></div>
                            <div class="bounce3"></div>
                        </div>
                        <div class="error"></div>
                        <div class="info"></div>


                    </center>
                </div>
                <div class="result"></div>

                <div class="help">
    <button data-task-id="1492">
        <i aria-hidden="true" class="fa fa-info-circle "></i>
    </button>
    <div class="help-container" data-task-id="1492">
        <div class="check-line">
            <div class="check-inline requirement success">
                  <i aria-hidden="true" class="fa fa-check-circle "></i>
                Requirement success
            </div>
            <div class="check-inline requirement fail">
                  <i aria-hidden="true" class="fa fa-times-circle "></i>
                Requirement fail
            </div>
        </div>
        <div class="check-line">
            <div class="check-inline code success">
                  <i aria-hidden="true" class="fa fa-check-circle "></i>
                Code success
            </div>
            <div class="check-inline code fail">
                  <i aria-hidden="true" class="fa fa-times-circle "></i>
                Code fail
            </div>
        </div>
        <div class="check-line">
            <div class="check-inline efficiency success">
                  <i aria-hidden="true" class="fa fa-check-circle "></i>
                Efficiency success
            </div>
            <div class="check-inline efficiency fail">
                  <i aria-hidden="true" class="fa fa-times-circle "></i>
                Efficiency fail
            </div>
        </div>
        <div class="check-line">
            <div class="check-inline answer success">
                  <i aria-hidden="true" class="fa fa-check-circle "></i>
                Text answer success
            </div>
            <div class="check-inline answer fail">
                  <i aria-hidden="true" class="fa fa-times-circle "></i>
                Text answer fail
            </div>
        </div>
        <div class="check-line">
            <div class="check-inline requirement fail offline">
                  <i aria-hidden="true" class="fa fa-times-circle "></i>
                Skipped - Previous check failed
            </div>
        </div>
    </div>
</div>

            </div>
        </div><!-- /.modal-content -->
    </div><!-- /.modal-dialog -->
</div>



    <button class="btn btn-default btn-sm" data-toggle="modal" data-target="#container-specs-modal"><i aria-hidden="true" class="fa fa-terminal "></i><span>Get a sandbox</span></button>

</div>


        <div class="fs-4">
        </div>
      </div>


  </div>
</div>

    </div>

    <p class="lg-gap">
      <a class="btn btn-primary btn-block" data-confirm="Are you sure? Make sure you focused on the mandatory tasks first" href="/projects/273/unlock_optionals">Done with the mandatory tasks? Unlock 1 advanced task now!</a>
    </p>




          <div class="modal fade" id="container-specs-modal"><div class="modal-dialog modal-lg"><div class="modal-content"><div class="modal-header"><button type="button" class="close" data-dismiss="modal" aria-label="Close"><span aria-hidden="true">&times;</span></button><h4 class="modal-title">Recommended Sandbox</h4></div><div class="modal-body"><div data-react-class="user_containers/ContainerSpecs" data-react-props="{&quot;containerModelName&quot;:&quot;Sandbox&quot;,&quot;containerSpecs&quot;:[{&quot;description&quot;:&quot;\u003cp\u003eBasic Ubuntu 20.04, with vim, emacs, curl, wget and all needed for Holberton Foundations\u003c/p\u003e\n&quot;,&quot;id&quot;:39,&quot;name&quot;:&quot;Ubuntu 20.04&quot;,&quot;online&quot;:true,&quot;container&quot;:{&quot;container_id&quot;:&quot;829c7d9b49384542258d6be5889b110a3ef2f62fa72a0ba541ff12ef71ed9d4a&quot;,&quot;id&quot;:20269,&quot;restart_uri&quot;:null,&quot;uri&quot;:&quot;/user_containers/20269.json&quot;,&quot;webterm_uri&quot;:&quot;/user_containers/20269/webterm&quot;,&quot;host&quot;:&quot;829c7d9b4938.dbdbff27.hbtn-cod.io&quot;,&quot;password&quot;:&quot;457100faa612f860e400&quot;,&quot;ports&quot;:{&quot;22&quot;:49405,&quot;3306&quot;:49401,&quot;4000&quot;:49400,&quot;8080&quot;:49396,&quot;3000&quot;:49402,&quot;443&quot;:49403,&quot;5000&quot;:49399,&quot;5001&quot;:49398,&quot;80&quot;:49404,&quot;8000&quot;:49397}}}],&quot;containersLimit&quot;:5,&quot;csrfToken&quot;:&quot;05_dfkqKixTK3bIZk9QjKJ5CvVFQQVppy0D5XlMWs0IXo3Gj51WLu0BX-99WYIsXSoLjflUsO3cBdIXwIq4ARg&quot;,&quot;startStatusURI&quot;:&quot;/user_containers/start_status.json&quot;,&quot;startURI&quot;:&quot;/user_containers/start.json&quot;}" data-react-cache-id="user_containers/ContainerSpecs-0"></div></div></div></div></div>

  </div>
</div>


      </article>

      <div class="copyright">Copyright © 2022 Holberton Inc, All rights reserved.</div>
    </main>

      <button class="btn btn-primary" id="search-button" data-search-active="false" data-toggle="modal" data-target="#search-modal">
  <i aria-hidden="true" class="fa fa-search "></i>
  <i aria-hidden="true" class="fa fa-window-minimize "></i>
</button>

      <div class="modal fade" id="search-modal" tabindex="-1" role="dialog" aria-labelledby="search-modal-label">
    <div class="modal-dialog modal-md">
        <div class="modal-content">
            <div class="modal-header">
                <div id="search-bar-container">
    <input id="search-bar"
            type="text"
            name="hbtn-search-bar"
            placeholder="✨Start search by typing in this field✨">
</div>

            </div>
            <div class="modal-body">
                <div id="modal-spinner" class="spinner gap">
                    <div class="bounce1"></div>
                    <div class="bounce2"></div>
                    <div class="bounce3"></div>
                </div>
                <div id="search-results-container">
</div>

            </div>
        </div>
    </div>
</div>



      <div class="modal fade" id="markdownGuideModal" tabindex="-1" role="dialog" aria-labelledby="markdownGuideModalLabel" aria-hidden="true">
  <div class="modal-dialog modal-md">
    <div class="modal-content">
        <div class="modal-header">
          <button type="button" class="close" data-dismiss="modal" aria-label="Close"><span aria-hidden="true">&times;</span></button>
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