/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:12 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SADomainCommand.h>

@class SAEmailEmail;

@interface SAEmailSend : SADomainCommand

@property (nonatomic,retain) SAEmailEmail * email; 
+(id)send;
+(id)sendWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(SAEmailEmail *)email;
-(void)setEmail:(SAEmailEmail *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
@end

