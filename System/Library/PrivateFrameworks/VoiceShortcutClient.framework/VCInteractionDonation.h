/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:26 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/VCActionDonation.h>

@class NSString, INInteraction, NSDate, INShortcut;

@interface VCInteractionDonation : NSObject <VCActionDonation> {

	NSString* _identifier;
	NSString* _sourceAppIdentifier;
	NSString* _title;
	NSString* _subtitle;
	INInteraction* _interaction;

}

@property (nonatomic,readonly) INInteraction * interaction;                                  //@synthesize interaction=_interaction - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                                   //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSDate * date; 
@property (nonatomic,copy,readonly) NSString * sourceAppIdentifier;                          //@synthesize sourceAppIdentifier=_sourceAppIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * sourceAppIdentifierForDisplay; 
@property (nonatomic,copy,readonly) NSString * sourceAppIdentifierForLaunching; 
@property (nonatomic,readonly) NSString * title;                                             //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSString * subtitle;                                          //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * fullDescription; 
@property (nonatomic,copy,readonly) NSString * suggestedPhrase; 
@property (nonatomic,readonly) id uniqueProperty; 
@property (nonatomic,readonly) INShortcut * shortcut; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)timestampDateFormatter;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSDate *)date;
-(NSString *)identifier;
-(NSString *)title;
-(NSString *)subtitle;
-(NSString *)fullDescription;
-(INInteraction *)interaction;
-(NSString *)sourceAppIdentifier;
-(INShortcut *)shortcut;
-(id)initWithEvent:(id)arg1 ;
-(NSString *)sourceAppIdentifierForDisplay;
-(NSString *)sourceAppIdentifierForLaunching;
-(NSString *)suggestedPhrase;
-(id)uniqueProperty;
-(id)initWithIdentifier:(id)arg1 sourceAppIdentifier:(id)arg2 interaction:(id)arg3 ;
@end

