/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:25 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/GameController.framework/GameController
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol GCFrontmostApplicationObserverDelegate;
@interface GCFrontmostApplicationObserver : NSObject {

	int _frontmostPid;
	id<GCFrontmostApplicationObserverDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<GCFrontmostApplicationObserverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<GCFrontmostApplicationObserverDelegate>)delegate;
-(void)setDelegate:(id<GCFrontmostApplicationObserverDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
@end

