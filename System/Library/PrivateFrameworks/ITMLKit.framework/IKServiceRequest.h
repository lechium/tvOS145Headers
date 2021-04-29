/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:37 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol IKServiceRequestDelegate;
#import <ITMLKit/ITMLKit-Structs.h>
@class IKAppContext, IKServiceContext;

@interface IKServiceRequest : NSObject {

	int _state;
	struct {
		BOOL hasDidCompleteWithStatus;
	}  _srDelegateFlags;
	IKAppContext* _appContext;
	IKServiceContext* _serviceContext;
	id<IKServiceRequestDelegate> _delegate;

}

@property (nonatomic,__weak,readonly) IKAppContext * appContext;                        //@synthesize appContext=_appContext - In the implementation block
@property (nonatomic,readonly) IKServiceContext * serviceContext;                       //@synthesize serviceContext=_serviceContext - In the implementation block
@property (assign,nonatomic,__weak) id<IKServiceRequestDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<IKServiceRequestDelegate>)delegate;
-(void)setDelegate:(id<IKServiceRequestDelegate>)arg1 ;
-(void)cancel;
-(void)send;
-(IKAppContext *)appContext;
-(IKServiceContext *)serviceContext;
-(void)_completedWithStatus:(long long)arg1 errorDictionary:(id)arg2 ;
-(id)initWithAppContext:(id)arg1 serviceContext:(id)arg2 ;
@end
