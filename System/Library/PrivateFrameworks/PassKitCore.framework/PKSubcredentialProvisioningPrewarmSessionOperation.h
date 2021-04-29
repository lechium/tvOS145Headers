/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:19 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PKSubcredentialProvisioningPairingSessionOperation.h>

@interface PKSubcredentialProvisioningPrewarmSessionOperation : PKSubcredentialProvisioningPairingSessionOperation {

	BOOL _operationWasCancelled;

}
-(void)performOperation;
-(void)session:(id)arg1 didChangeState:(unsigned long long)arg2 ;
-(void)appletSubcredentialPairingSession:(id)arg1 didFinishPreWarmWithResult:(id)arg2 ;
-(BOOL)canCancelOperation;
-(void)cancelOperation;
-(id)issuerName;
-(void)startPrewarming;
@end

