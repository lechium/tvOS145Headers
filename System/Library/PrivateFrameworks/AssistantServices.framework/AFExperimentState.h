/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:19 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/AFDictionaryConvertible.h>

@class NSDate, NSString;

@interface AFExperimentState : NSObject <NSCopying, NSSecureCoding, AFDictionaryConvertible> {

	BOOL _didEnd;
	NSDate* _lastSyncDate;
	NSString* _endingGroupIdentifier;
	NSString* _version;

}

@property (nonatomic,copy,readonly) NSDate * lastSyncDate;                         //@synthesize lastSyncDate=_lastSyncDate - In the implementation block
@property (nonatomic,readonly) BOOL didEnd;                                        //@synthesize didEnd=_didEnd - In the implementation block
@property (nonatomic,copy,readonly) NSString * endingGroupIdentifier;              //@synthesize endingGroupIdentifier=_endingGroupIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * version;                            //@synthesize version=_version - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(/*^block*/id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)version;
-(BOOL)didEnd;
-(id)_descriptionWithIndent:(unsigned long long)arg1 ;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(NSDate *)lastSyncDate;
-(id)buildDictionaryRepresentation;
-(id)mutatedCopyWithMutator:(/*^block*/id)arg1 ;
-(NSString *)endingGroupIdentifier;
-(id)initWithLastSyncDate:(id)arg1 didEnd:(BOOL)arg2 endingGroupIdentifier:(id)arg3 version:(id)arg4 ;
@end

