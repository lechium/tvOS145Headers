/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:10 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class CALayer, CAState, CAStateControllerUndo, NSMutableArray, NSTimer;

@interface CAStateControllerLayer : NSObject {

	CALayer* _layer;
	CAState* _currentState;
	CAStateControllerUndo* _undoStack;
	NSMutableArray* _transitions;
	NSTimer* _nextTimer;
	CAState* _nextState;
	float _nextSpeed;

}

@property (readonly) CALayer * layer;                                //@synthesize layer=_layer - In the implementation block
@property (nonatomic,retain) CAState * currentState;                 //@synthesize currentState=_currentState - In the implementation block
@property (readonly) CAStateControllerUndo * undoStack;              //@synthesize undoStack=_undoStack - In the implementation block
-(void)dealloc;
-(void)invalidate;
-(CAState *)currentState;
-(CALayer *)layer;
-(void)addTransition:(id)arg1 ;
-(CAStateControllerUndo *)undoStack;
-(id)initWithLayer:(id)arg1 ;
-(void)removeTransition:(id)arg1 ;
-(void)setCurrentState:(CAState *)arg1 ;
@end

