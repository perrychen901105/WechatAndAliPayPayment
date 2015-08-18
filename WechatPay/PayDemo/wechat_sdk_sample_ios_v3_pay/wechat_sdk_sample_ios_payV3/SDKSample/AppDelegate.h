//
//  AppDelegate.h
//  ApiClient
//
//  Created by Tencent on 12-2-27.
//  Copyright (c) 2012年 Tencent. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WXApi.h"
#import "SendMsgToWeChatViewController.h"
#import "RespForWeChatViewController.h"


@interface AppDelegate : UIResponder<UIApplicationDelegate, sendMsgToWeChatViewDelegate,
UIAlertViewDelegate, WXApiDelegate, RespForWeChatViewDelegate, NSURLSessionDataDelegate>
{
    enum WXScene _scene;
}
@property (nonatomic, copy) NSString *timeStamp;
@property (nonatomic, copy) NSString *nonceStr;
@property (nonatomic, copy) NSString *traceId;
@property (strong, nonatomic) UIWindow *window;
@property (strong, nonatomic) SendMsgToWeChatViewController *viewController;

@end
