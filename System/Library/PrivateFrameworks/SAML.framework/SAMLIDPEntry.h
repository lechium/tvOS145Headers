/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:35 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SAML.framework/SAML
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAML/SAMLBaseElement.h>

@class NSString;

@interface SAMLIDPEntry : SAMLBaseElement

@property (nonatomic,readonly) NSString * providerId; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * loc; 
+(id)createElement:(id*)arg1 ;
-(NSString *)name;
-(NSString *)loc;
-(NSString *)providerId;
@end

