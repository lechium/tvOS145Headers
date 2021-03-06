/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:23 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INSendAnnouncementIntentExport.h>

@class INAnnouncement, NSArray, NSNumber, NSString;

@interface INSendAnnouncementIntent : INIntent <INSendAnnouncementIntentExport>

@property (nonatomic,copy,readonly) INAnnouncement * announcement; 
@property (nonatomic,copy,readonly) NSArray * recipients; 
@property (nonatomic,copy,readonly) NSNumber * isReply; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)domain;
-(void)setDomain:(id)arg1 ;
-(id)_metadata;
-(void)_setMetadata:(id)arg1 ;
-(void)setRecipients:(NSArray *)arg1 ;
-(NSArray *)recipients;
-(id)_dictionaryRepresentation;
-(id)_typedBackingStore;
-(long long)_intentCategory;
-(id)_categoryVerb;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2 ;
-(id)verb;
-(void)setVerb:(id)arg1 ;
-(id)parametersByName;
-(void)setParametersByName:(id)arg1 ;
-(long long)_preferredInteractionDirection;
-(INAnnouncement *)announcement;
-(void)setAnnouncement:(INAnnouncement *)arg1 ;
-(NSNumber *)isReply;
-(void)setIsReply:(NSNumber *)arg1 ;
-(id)initWithAnnouncement:(id)arg1 recipients:(id)arg2 isReply:(id)arg3 ;
@end

