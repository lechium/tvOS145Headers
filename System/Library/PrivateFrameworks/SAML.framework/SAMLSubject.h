/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:36 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SAML.framework/SAML
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAML/SAMLBaseElement.h>

@class SAMLNameId, NSArray;

@interface SAMLSubject : SAMLBaseElement

@property (nonatomic,readonly) SAMLNameId * nameId; 
@property (nonatomic,readonly) NSArray * subjectConfirmations; 
+(id)createElement:(id*)arg1 ;
-(SAMLNameId *)nameId;
-(NSArray *)subjectConfirmations;
@end

