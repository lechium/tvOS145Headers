/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:08 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SASettingCommand.h>

@class NSString, NSNumber;

@interface SASettingShowPassword : SASettingCommand

@property (nonatomic,copy) NSString * appBundleId; 
@property (nonatomic,copy) NSString * appOrWebsiteName; 
@property (nonatomic,copy) NSNumber * shouldPromptForAuthentication; 
@property (nonatomic,copy) NSString * spokenAppOrWebsiteName; 
+(id)showPassword;
+(id)showPasswordWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setAppBundleId:(NSString *)arg1 ;
-(NSString *)appBundleId;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)appOrWebsiteName;
-(void)setAppOrWebsiteName:(NSString *)arg1 ;
-(NSNumber *)shouldPromptForAuthentication;
-(void)setShouldPromptForAuthentication:(NSNumber *)arg1 ;
-(NSString *)spokenAppOrWebsiteName;
-(void)setSpokenAppOrWebsiteName:(NSString *)arg1 ;
@end

