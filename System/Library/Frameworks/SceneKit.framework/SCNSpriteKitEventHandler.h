/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:52 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class SKScene, NSMutableDictionary;

@interface SCNSpriteKitEventHandler : NSObject {

	SKScene* _scene;
	NSMutableDictionary* _touchMap;
	BOOL _mouseIsDown;
	BOOL _rightMouseIsDown;

}

@property (nonatomic,retain) SKScene * scene;              //@synthesize scene=_scene - In the implementation block
-(id)init;
-(void)dealloc;
-(SKScene *)scene;
-(void)setScene:(SKScene *)arg1 ;
-(BOOL)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
@end

