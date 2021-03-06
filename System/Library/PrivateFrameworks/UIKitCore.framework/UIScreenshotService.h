/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:39 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/_UISceneComponentProviding.h>

@protocol UIScreenshotServiceDelegate;
@class UIScene, UIWindowScene, NSString;

@interface UIScreenshotService : NSObject <_UISceneComponentProviding> {

	UIScene* _scene;
	id<UIScreenshotServiceDelegate> _delegate;
	id<UIScreenshotServiceDelegate> _privateDelegate;

}

@property (assign,nonatomic,__weak) id<UIScreenshotServiceDelegate> privateDelegate;               //@synthesize privateDelegate=_privateDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<UIScreenshotServiceDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,__weak,readonly) UIWindowScene * windowScene; 
@property (assign,setter=_setScene:,getter=_scene,nonatomic,__weak) UIScene * _scene;              //@synthesize scene=_scene - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<UIScreenshotServiceDelegate>)delegate;
-(void)setDelegate:(id<UIScreenshotServiceDelegate>)arg1 ;
-(UIScene *)_scene;
-(id<UIScreenshotServiceDelegate>)privateDelegate;
-(void)setPrivateDelegate:(id<UIScreenshotServiceDelegate>)arg1 ;
-(UIWindowScene *)windowScene;
-(id)initWithScene:(id)arg1 ;
-(void)_setScene:(id)arg1 ;
@end

