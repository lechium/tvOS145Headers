/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:01 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class VSOptional, AKAnisetteProvisioningController;

@interface VSVerificationDataOperation : VSAsyncOperation {

	VSOptional* _result;
	AKAnisetteProvisioningController* _provisioningController;

}

@property (retain) VSOptional * result;                                                              //@synthesize result=_result - In the implementation block
@property (nonatomic,retain) AKAnisetteProvisioningController * provisioningController;              //@synthesize provisioningController=_provisioningController - In the implementation block
-(id)init;
-(VSOptional *)result;
-(void)setResult:(VSOptional *)arg1 ;
-(void)_finishWithError:(id)arg1 ;
-(void)_finishWithData:(id)arg1 ;
-(void)executionDidBegin;
-(AKAnisetteProvisioningController *)provisioningController;
-(void)_finishWithResult:(int)arg1 bytes:(char*)arg2 length:(unsigned)arg3 ;
-(void)setProvisioningController:(AKAnisetteProvisioningController *)arg1 ;
@end

