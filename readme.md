# version 1.0.0  

### 今朝的火炮支援系统  
### JZ's Artillery Support System  

#### 简体中文  


##### 前言  

在一些导演任务使用的时候缺少一些火炮支援系统。在做一些任务时我初步编写了JZ_arty_fireSupport。但是并不好用。经过一些设想、设计和编写之后，我编写了这个火炮支援系统。  
火炮支援请求单位可以使用本系统提供的火炮支援系统改善部队的战略形式.  


##### 安装方法  
###### 1)对需要使用面板的玩家执行  
    createdialog "JZ_ASS_CommanderPanel";  

###### 2)description.ext  
  
    #include "ArtySupportSystem\diaglog\diaglog.hpp"  
    class CfgFunctions  
    {  
    	#include "ArtySupportSystem\functions\CfgFunctions.hpp"  
    };  

###### 3)执行options.sqf  (推荐全局执行)  

###### 4)请合并stringtable.xml  

##### 设置：options.sqf  
在其中按照内部设置自行需要使用的弹药类型。  

##### 特性：  
1. 内置BaseControls，无需考虑控件类冲突  
2. 编写了专门的GUI，方便使用。  
3. 辅助瞄准系统使得获取坐标特别方便。  
4. 内部结构清楚明了，方便修改。  
5. 多国语言包，方便本地化。（虽然目前来说只有中英俄三国）  

##### 下一步更新  
1. 开发CTOM，地图上检查目标。  
2. 剩余弹药模式，弹药不再无限。  
3. 管理员菜单，方便多人游戏为不同玩家分别开启火炮支援系统。（配合JZ's 简报系统更好）  

##### 联系作者：今朝  
1. QQ:736023910  
2. Email:XunyiYang@outlook.com  

#### English  

JZ's Artillery Support System.  
This System is used for support caller.The artillery support request unit can use the artillery support system provided by this system to improve the strategic form of your force.  

##### How to use  
1. Execute for players who need to use the system   
    createdialog "JZ_ASS_CommanderPanel";  

2. In your discription.ext :  
    #include "ArtySupportSystem\diaglog\diaglog.hpp"  
    class CfgFunctions  
    {  
    	#include "ArtySupportSystem\functions\CfgFunctions.hpp"  
    };  
3. Execute options.sqf (global execution is recommended)  
4. Please merge stringtable.xml.  

##### Features:  
1. Built-in BaseControls, no need to consider control conflicts  
2. A special GUI is written for easy use.  
3. The auxiliary aiming system makes it particularly convenient to obtain coordinates.  
4. The internal structure is clear and easy to modify.  
5. Multi-language packs, convenient for localization. (Although currently there are only three countries, China, Britain and Russia)  


##### Contact the author: Jinzhao  
1. Email:XunyiYang@outlook.com    
