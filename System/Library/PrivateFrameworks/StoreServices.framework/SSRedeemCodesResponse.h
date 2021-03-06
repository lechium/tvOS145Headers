/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:38 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SSXPCCoding.h>

@class NSDictionary, NSArray, NSString;

@interface SSRedeemCodesResponse : NSObject <SSXPCCoding> {

	NSDictionary* _codeResponses;
	NSDictionary* _errors;
	NSDictionary* _redeemedCodes;

}

@property (nonatomic,copy,readonly) NSArray * codeResponses; 
@property (nonatomic,readonly) NSArray * failedCodes; 
@property (nonatomic,copy,readonly) NSArray * redeemedCodes; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(NSArray *)codeResponses;
-(id)dictionaryForCode:(id)arg1 ;
-(id)errorForCode:(id)arg1 ;
-(NSArray *)failedCodes;
-(NSArray *)redeemedCodes;
-(id)responseDictionaryForCode:(id)arg1 ;
-(void)setCodeResponses:(NSArray *)arg1 ;
-(void)setFailedCodes:(NSArray *)arg1 ;
-(void)setRedeemedCodes:(NSArray *)arg1 ;
@end

