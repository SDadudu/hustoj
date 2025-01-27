# HUSTOJ

> 流行的开源在线评测系统（OJ）- 跨平台、易安装、有题库、开发门槛低

## 🚀 快速开始

### 常见问题
- 📖 [FAQ常见问答](http://hustoj.com)
- 🤖 [咨询小张AI](https://yuanqi.tencent.com/agent/jADpOEWqLvTv)

### 重要链接
- [🎨 模板演示](#模板演示)
- [📜 版权说明](#版权说明) 
- [🙏 致谢](#致谢)
- [📝 更新日志](#更新日志)

<details>
<summary><b>💻 安装指南</b></summary>

- [安装说明](#安装说明)
- [注意事项](#注意事项) 
- [系统演示](#系统演示)
- [硬件需求](#硬件需求)
- [校园网安装](#校园网安装)
- [基于 Ubuntu 安装](#基于-ubuntu-2204-安装) ⭐ 新手首选
- [Ubuntu 更换软件源](#ubuntu-更换软件源)
- [基于 Deepin 安装](#基于-deepin-20-安装)
- [基于 CentOS 安装](#基于-centos-安装)
- [基于 Docker 安装](#基于-docker-安装)
- [基于其他发行版安装](#基于其他发行版安装)
- [LiveCD 下载安装](#livecd下载安装)
- [卸载阿里云盾](#卸载阿里云盾)

</details>

<details>
<summary><b>📚 使用指南</b></summary>

- [装后须知](#装后须知)
- [备份说明](#备份)
- [迁移方法](#迁移)
- [更新升级](#更新升级)
- [修复指南](#修复)
- [二次开发](https://github.com/zhblue/hustoj/blob/master/wiki/SecondaryDevelopment.md)

</details>

### 更多资源
- [💝 支持捐助、加入社区](#支持捐助加入社区)
- [📦 免费题库](#免费题库)
- [❓ 求助报错](https://github.com/zhblue/hustoj/issues/new/choose)

### 获取帮助
- 💬 官方QQ群: `23361372`（验证问题：学校或单位+姓名）
- 💰 付费服务微信: `hustoj`
- 🔧 远程协助请安装[向日葵](https://sunlogin.oray.com/)或准备SSH账号

## 🎨 模板演示

| 模板名称 | 预览链接 | 贡献者 |
|---------|---------|--------|
| SYZOJ | [预览](http://demo.hustoj.com/) | [@renbaoshuo](https://github.com/renbaoshuo) |
| Sidebar | [预览](http://demo.hustoj.com/?tp=sidebar) | - |
| BS3原版 | [预览](http://demo.hustoj.com/?tp=bs3) | - |
| Sweet | [预览](http://demo.hustoj.com/?tp=sweet) | - |
| Bshark | [预览](http://demo.hustoj.com/?tp=bshark) | [@yemaster](https://github.com/yemaster) |
| MDUI | [预览](http://demo.hustoj.com/?tp=mdui) | [@renbaoshuo](https://github.com/renbaoshuo) |

> 💡 修改 `/home/judge/src/web/include/db_info.inc.php` 中的 `$OJ_TEMPLATE` 值即可切换模板

## 💻 安装说明

### 📹 视频教程
[Ubuntu 安装教程](https://www.bilibili.com/video/BV1Mp4y1C7Xx)
> 推荐使用最新 Ubuntu LTS 版本（如 24.04、22.04），而不是视频中的 18.04。

### ⚠️ 重要提示
1. **请选择适合的安装脚本**，根据您的发行版从下面选择一个。
2. **不要使用过时教程**，特别是百度上的长篇教程，可能导致:
   - 不能判题
   - 界面不显示
   - 无法升级
3. **避免使用以下环境**:
   - 🚫 不要安装 Apache
   - 🚫 不要使用 LNMP/LAMP/Cpanel
   - 🚫 不要使用面板程序提供的环境

### 🔧 安装方法

#### Ubuntu 22.04/24.04 安装（推荐）
> 适用于各类公有云，安装最容易，成功率最高

```bash
wget http://dl.hustoj.com/install.sh
sudo bash install.sh
```

#### Debian 12 安装
> 支持各类虚拟机、云服务、物理机
```bash
wget http://dl.hustoj.com/install.sh
sudo bash install.sh
```

#### 校园网环境安装
由于 Github 的 SVN 访问缓慢，建议：
1. 从 [Releases](https://github.com/zhblue/hustoj/releases) 下载 `tar.gz` 版本
2. 使用 `install` 目录下的 `*-bytgz.sh` 脚本安装

```bash
sudo bash install-ubuntu18-bytgz.sh 19.06.04.tar.gz
```
> ⚠️ 注意：这种方式安装的实例将来只能手工升级

#### Deepin/UOS 20+ 安装
```bash
# Deepin 20+ 安装
wget http://dl.hustoj.com/install-deepin20+.sh
sudo bash install-deepin20+.sh

# UOS 20+ 安装
wget http://dl.hustoj.com/install-uos20.sh
sudo bash install-uos20.sh
```
> 内置QQ、微信、WPS，方便出题人本地测试

#### CentOS 7 安装
```bash
wget https://raw.githubusercontent.com/zhblue/hustoj/master/trunk/install/install-centos7.sh
sudo bash install-centos7.sh
```
> ⚠️ 注意：CentOS发行策略改变，未来前景不确定，不推荐使用

#### Docker 方式安装
请参考 [Docker安装说明](https://github.com/zhblue/hustoj/blob/master/wiki/Docker.md)

#### 其他发行版安装
- Debian 10+ (Debian10/11)
- 树莓派 raspbian8/9
- Ubuntu 14.04
> 安装脚本在 `install` 目录下，可能需要部分手工调整

#### Ubuntu 更换软件源
提供两个可选脚本（二选一）：

```bash
# 脚本一
wget http://dl.hustoj.com/sources.list.sh
sudo bash sources.list.sh

# 脚本二（推荐腾讯云镜像和Ubuntu原版镜像用户使用）
wget http://dl.hustoj.com/update-sources-ubuntu.sh
sudo bash update-sources-ubuntu.sh
```

#### 卸载阿里云盾
阿里云的 Ubuntu 20.04 预装了 `apparmor`，可能造成 `systemd` 和 `umount` 进程卡CPU 100%
解决方案：
1. 安装docker并启用`OJ_USE_DOCKER=1`
2. 或执行卸载阿里云盾脚本

### 📀 LiveCD 安装
- [家宽下载](http://dl3.hustoj.com)
- 获取百度云下载链接：发送 "livecd" 到微信公众号 `onlinejudge`

适用场景：
- Linux 不熟悉的用户
- 内网用户
- 无网络环境用户

### 🔍 安装后检查
1. 浏览器访问服务器IP地址
2. 如果无法访问，请检查：
   - 访问策略
   - 防火墙设置（80端口）
   - 云服务安全组

### 💡 建议配置
- 服务器：双核2G内存以上
- 最低配置：1核1G内存
- 建议系统：Ubuntu 最新 LTS 版本

## 📜 版权说明

HUSTOJ 是采用 [GPL](https://github.com/zhblue/hustoj/blob/master/trunk/web/gpl-2.0.txt) 的自由软件。
> 注：仅限原创部分代码，其中使用的其他开源项目组件请遵循原组件的协议。

<details>
<summary><b>🙏 致谢清单</b></summary>

感谢以下开源项目的贡献者，这些项目的代码及衍生代码遵循其原有开源协议：

### 评测系统
- masteroj, uoj, loj, syzoj, zoj, qduoj
- openJudger, [scratch-run](https://github.com/VNOI-Admin/scratch-run)
- [PHPMailer](https://github.com/zhblue/hustoj/tree/PHPMailer)

### 基础环境
- Linux, Apache, Nginx, PHP, MySQL, MariaDB, Memcached

### 前端组件
- Bootstrap, KindEditor, ACEeditor
- Blockly, CodeMirror, KaTeX
- PHPFileManager, MDUI

### 编程语言
- GCC, Clang, OpenJDK
- FreePascal, Mono
- Docker, SyntaxHighlighter

</details>

## 📝 更新日志

<details open>
<summary><b>2025年更新</b></summary>

| 日期 | 类型 | 更新内容 | 预览 |
|------|------|----------|-------|
| 01-23 | ✨ 优化 | 优化用户列表显示 | ![image](https://github.com/user-attachments/assets/4f703d94-523e-4afa-9e47-66207c3bc182) |
| 01-20 | ✨ 新增 | 增加比赛禁止选项 | ![image](https://github.com/user-attachments/assets/1f82abcc-eac3-4278-bffc-59d31225edee) |
| 01-07 | ✨ 新增 | 增加矩阵转置按钮 | ![image](https://github.com/user-attachments/assets/835135b0-72d8-4515-8df1-070835689a9b) |
| 01-06 | ✨ 新增 | 增加全局题单班组统计显示页 | ![image](https://github.com/user-attachments/assets/86d8f6ca-dd11-4336-964f-907cac988f54) |
| 01-04 | ✨ 新增 | 增加题单班组统计显示页 | ![image](https://github.com/user-attachments/assets/3173e20a-df5c-4588-9b74-60564c6c1975) |
| 01-02 | ✨ 优化 | 允许新闻用importance字段排序 | ![image](https://github.com/user-attachments/assets/fb20d0bd-5ef9-4d73-893f-575487d16131) |
| 01-01 | 🎉 预告 | 新年好！ | ![image](https://github.com/user-attachments/assets/23d4fb3c-b324-46fa-a482-2cad341e5e1f) |

</details>

<details>
<summary><b>2024年更新</b></summary>

| 日期 | 类型 | 更新内容 |
|------|------|----------|
| 12-20 | 🔧 补丁 | 改善用户导入功能，支持带BOM的UTF8编码csv文件。优化用户删除功能的界面提示 |
| 12-10 | ✨ 更新 | 远程调用客户端remote_service.php |
| 12-09 | ✨ 更新 | 远程调用接口service.php |
| 12-07 | ✨ 更新 | 导入用户可以设置有效期 |
| 11-30 | ✨ 更新 | 初步增加仓颉语言支持 |
| 11-26 | ✨ 更新 | 增加用户账户有效期，管理员手工添加的账户有从当前日期开始365天的过期时间 |
| 11-25 | ✨ 更新 | 增加upj类型特判流程，返回值为百分制分数 |
| 11-24 | ✨ 更新 | 增加单例部分分开关OJ_INTERNAL_MARK，对比输出中给首个不同的位置加红色 |
| 11-23 | ✨ 更新 | 允许测试数据目录中存在judge.conf，对单题覆盖系统部分判题设置 |
| 11-15 | ✨ 更新 | 更友善的对比输出，对单个测试数据提供部分分计算 |
| 10-19 | ✨ 更新 | 默认安装memcached，开启缓存，Docker环境在Ubuntu24.04中同步更新到24.04 |

</details>

<details>
<summary><b>2023年更新</b></summary>

| 日期 | 类型 | 更新内容 |
|------|------|----------|
| 12-06 | ✨ 更新 | syzoj增加月度之星,改善排名效率和页码,修复bing壁纸 |
| 11-24 | ✨ 更新 | syzoj模板中的比赛榜单提供下载链接 |
| 10-09 | ✨ 更新 | 私有比赛结束后，比赛创建者可以看到比赛中正在被其他私有比赛使用的题目的标题和链接 |
| 09-29 | ✨ 更新 | 支持导入HOJ导出的json+in/out的zip文件 |
| 09-17 | ✨ 更新 | 当增加用户权限时，给管理员email发送提醒邮件 |
| 09-06 | ✨ 更新 | 增加邮件激活账号功能 |
| 08-25 | ✨ 更新 | 选择题题面用span class=auto_select标记的范围，自动生成单选框控件 |

</details>

## 🔄 备份与迁移

### 备份
```bash
# 使用 bak.sh 进行备份
sudo bash /home/judge/src/install/bak.sh

# 备份文件位置：/var/backups/hustoj_日期.tar.bz2
```

### 迁移
1. 在新服务器上完成全新安装和测试
2. 将备份文件复制到新服务器的 `/home/judge/src/install` 目录
3. 执行还原脚本：
```bash
sudo su
cd /home/judge/src/install/
bash restore.sh hustoj_备份日期.tar.bz2
```

### 更新升级
```bash
# 使用 fixing.sh 进行更新
sudo bash /home/judge/src/install/fixing.sh
```
> 升级后可能需要登录管理后台执行一次数据库更新

## 💝 支持与社区

### 加入社区
- 📱 用户交流QQ群：`23361372`
- ✅ 验证问题：学校或单位+姓名
- 📚 群共享：题库、安装盘、文档
- ⚠️ 群规：禁止人身攻击、侮辱他人

### 支持项目
1. 领取支付宝红包
   <img src="http://tk.hustoj.com/upload/image/20180621/20180621190059_62537.png" width="140px" />
2. 在[TK题库](http://tk.hustoj.com)充值下载题目
3. 为项目点亮 Star ⭐
4. 保留系统页脚的公众号和红包码
5. 在论文中引用本项目
6. 向他人推荐本项目

## 🎯 系统演示
- [前台演示](http://demo.hustoj.com/)
- [龙芯部署](http://my.hustoj.com/)

## 📦 免费题库
- [FPS题库](https://github.com/zhblue/freeproblemset/tree/master/fps-examples)
- [TK题库免费专区](http://tk.hustoj.com/problemset.php?search=free)
- [谷歌代码存档版](http://code.google.com/p/freeproblemset)

## ☁️ 推荐云服务商
- [搬瓦工](https://bandwagonhost.com/aff.php?aff=67213)
- [UCloud年度大促](https://www.ucloud.cn/site/active/kuaijie.html?invitation_code=C1x6A291CBB02E8)
- [快杰云主机](https://www.ucloud.cn/site/active/ohost.html?invitation_code=C1x6A291CBB02E8)

## 🛠️ 推荐开源IDE
- [小熊猫](https://github.com/royqh1979/RedPanda-CPP/releases) 
