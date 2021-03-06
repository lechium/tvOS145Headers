/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:32 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/FMClient.framework/FMClient
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface FMClient.AuthenticationCredential : NSObject <NSSecureCoding> {

	 authToken;
	 personId;
	 hostName;

}

@property (readonly,nonatomic) NSString * authToken; 
@property (readonly,nonatomic) NSString * personId; 
@property (readonly,nonatomic) NSString * hostName; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)hostName;
-(NSString *)authToken;
-(NSString *)personId;
-(id)initWithAuthToken:(id)arg1 personId:(id)arg2 hostName:(id)arg3 ;
@end

