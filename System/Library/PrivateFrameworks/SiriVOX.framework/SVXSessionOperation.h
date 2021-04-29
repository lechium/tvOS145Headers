/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:38 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SiriVOX.framework/SiriVOX
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class SVXActivationContext, SVXDeactivationContext;

@interface SVXSessionOperation : NSObject {

	long long _type;
	SVXActivationContext* _activationContext;
	/*^block*/id _activationCompletion;
	SVXDeactivationContext* _deactivationContext;
	/*^block*/id _deactivationCompletion;

}
-(id)description;
-(id)initWithActivationContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithDeactivationContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)handleOperationUsingActivationBlock:(/*^block*/id)arg1 deactivationBlock:(/*^block*/id)arg2 ;
@end

