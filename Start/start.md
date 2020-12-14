## 和我签订契约，成为魔法少女吧

> - 以下所用 `PHPSESSID` 为登录 OJ 之后 `cookie` 里的 `PHPSESSID` 项的值
> - 以下所用 `SID` 为您的学号，记得带着20
> - 以下所用 `NickName` 为自己的昵称，要求为字母或数字，且开头为一个小写字母，会成为仓库里你的文件夹的名字

### 安装依赖

> 咱默认汝已经有了名为 `python` 的工具了
> 当然如果汝明白这是在干什么的话，可以自己来做，还可以套上一个虚拟环境之类的

```shell
pip install -r requirements.txt
```

### 使用 oh-my-problem 自动提交汝的题目

```shell
python ./OpenJudge/oh_my_problem.py PHPSESSID
```
或者

```shell
python ./OpenJudge/oh_my_problem.py
# 然后按照提示输入
```

### 使用 oh-my-code 自动提交汝的题解

```shell
python ./OpenJudge/oh_my_code.py SID NickName PHPSESSID
```

或者

```shell
python ./OpenJudge/oh_my_code
# 按照提示输入
```
