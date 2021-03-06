/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:59 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <IMCore/IMAccount.h>

@class IMHandle;

@interface IMSimulatedAccount : IMAccount {

	IMHandle* _loginHandle;

}

@property (nonatomic,retain) IMHandle * loginHandle;              //@synthesize loginHandle=_loginHandle - In the implementation block
-(BOOL)isConnected;
-(BOOL)supportsRegistration;
-(BOOL)isOperational;
-(id)loginIMHandle;
-(void)setLoginHandle:(IMHandle *)arg1 ;
-(IMHandle *)loginHandle;
@end

