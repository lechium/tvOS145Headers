/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:52 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class CAContext, _UIContextBinder;


@protocol _UIContextBindable <_UIContextDescribing>
@property (assign,setter=_setBoundContext:,nonatomic,__weak) CAContext * _boundContext; 
@property (assign,setter=_setContextBinder:,nonatomic,__weak) _UIContextBinder * _contextBinder; 
@required
-(BOOL)_isVisible;
-(void)_setBoundContext:(id)arg1;
-(_UIContextBinder *)_contextBinder;
-(void)_setContextBinder:(id)arg1;
-(CAContext *)_boundContext;
-(double)_bindableLevel;
-(id)_bindingLayer;

@end

