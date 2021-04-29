/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:36 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol WFActionProviderDelegate;
@interface WFActionProvider : NSObject {

	id<WFActionProviderDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<WFActionProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<WFActionProviderDelegate>)delegate;
-(void)setDelegate:(id<WFActionProviderDelegate>)arg1 ;
-(void)updateCache:(/*^block*/id)arg1 ;
-(void)deleteCache;
-(id)availableActionIdentifiers;
-(void)createActionsForRequests:(id)arg1 ;
-(id)createAllAvailableActions;
@end

