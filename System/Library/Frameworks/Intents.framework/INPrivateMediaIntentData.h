/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:23 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/INJSONSerializable.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class INSpeakerIDInfo, INAppIdentifier, NSNumber, NSString, INWholeHouseAudioMetadata;

@interface INPrivateMediaIntentData : NSObject <INJSONSerializable, NSCopying, NSSecureCoding> {

	INSpeakerIDInfo* _speakerIDInfo;
	INAppIdentifier* _proxiedThirdPartyAppInfo;
	NSNumber* _isAppAttributionRequired;
	NSNumber* _useDialogMemoryForAttribution;
	NSNumber* _isAppCorrection;
	NSString* _fallbackUsername;
	INWholeHouseAudioMetadata* _wholeHouseAudioMetadata;
	NSNumber* _nlConfidenceScore;
	long long _nlConfidenceLevel;
	NSNumber* _asrConfidenceScore;
	long long _asrConfidenceLevel;
	NSString* _resolvedSharedUserID;

}

@property (nonatomic,copy) INSpeakerIDInfo * speakerIDInfo;                                           //@synthesize speakerIDInfo=_speakerIDInfo - In the implementation block
@property (nonatomic,copy) INAppIdentifier * proxiedThirdPartyAppInfo;                                //@synthesize proxiedThirdPartyAppInfo=_proxiedThirdPartyAppInfo - In the implementation block
@property (nonatomic,copy) NSNumber * isAppAttributionRequired;                                       //@synthesize isAppAttributionRequired=_isAppAttributionRequired - In the implementation block
@property (nonatomic,copy) NSNumber * useDialogMemoryForAttribution;                                  //@synthesize useDialogMemoryForAttribution=_useDialogMemoryForAttribution - In the implementation block
@property (nonatomic,copy) NSString * fallbackUsername;                                               //@synthesize fallbackUsername=_fallbackUsername - In the implementation block
@property (nonatomic,copy) NSString * resolvedSharedUserID;                                           //@synthesize resolvedSharedUserID=_resolvedSharedUserID - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * isAppCorrection;                                       //@synthesize isAppCorrection=_isAppCorrection - In the implementation block
@property (nonatomic,copy,readonly) INWholeHouseAudioMetadata * wholeHouseAudioMetadata;              //@synthesize wholeHouseAudioMetadata=_wholeHouseAudioMetadata - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * nlConfidenceScore;                                     //@synthesize nlConfidenceScore=_nlConfidenceScore - In the implementation block
@property (nonatomic,readonly) long long nlConfidenceLevel;                                           //@synthesize nlConfidenceLevel=_nlConfidenceLevel - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * asrConfidenceScore;                                    //@synthesize asrConfidenceScore=_asrConfidenceScore - In the implementation block
@property (nonatomic,readonly) long long asrConfidenceLevel;                                          //@synthesize asrConfidenceLevel=_asrConfidenceLevel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2 ;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(id)initWithSpeakerIDInfo:(id)arg1 proxiedThirdPartyAppInfo:(id)arg2 isAppAttributionRequired:(id)arg3 useDialogMemoryForAttribution:(id)arg4 isAppCorrection:(id)arg5 fallbackUsername:(id)arg6 wholeHouseAudioMetadata:(id)arg7 nlConfidenceScore:(id)arg8 nlConfidenceLevel:(long long)arg9 asrConfidenceScore:(id)arg10 asrConfidenceLevel:(long long)arg11 ;
-(long long)asrConfidenceLevel;
-(NSNumber *)asrConfidenceScore;
-(NSString *)fallbackUsername;
-(void)setFallbackUsername:(NSString *)arg1 ;
-(NSNumber *)isAppAttributionRequired;
-(void)setIsAppAttributionRequired:(NSNumber *)arg1 ;
-(NSNumber *)isAppCorrection;
-(long long)nlConfidenceLevel;
-(NSNumber *)nlConfidenceScore;
-(INAppIdentifier *)proxiedThirdPartyAppInfo;
-(void)setProxiedThirdPartyAppInfo:(INAppIdentifier *)arg1 ;
-(NSString *)resolvedSharedUserID;
-(void)setResolvedSharedUserID:(NSString *)arg1 ;
-(INSpeakerIDInfo *)speakerIDInfo;
-(void)setSpeakerIDInfo:(INSpeakerIDInfo *)arg1 ;
-(NSNumber *)useDialogMemoryForAttribution;
-(void)setUseDialogMemoryForAttribution:(NSNumber *)arg1 ;
-(INWholeHouseAudioMetadata *)wholeHouseAudioMetadata;
-(id)initWithSpeakerIDInfo:(id)arg1 proxiedThirdPartyAppInfo:(id)arg2 isAppAttributionRequired:(id)arg3 useDialogMemoryForAttribution:(id)arg4 isAppCorrection:(id)arg5 fallbackUsername:(id)arg6 wholeHouseAudioMetadata:(id)arg7 nlConfidenceScore:(id)arg8 nlConfidenceLevel:(long long)arg9 asrConfidenceScore:(id)arg10 asrConfidenceLevel:(long long)arg11 resolvedSharedUserID:(id)arg12 ;
@end

