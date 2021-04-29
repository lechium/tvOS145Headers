/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:04 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/BiomeStreams.framework/BiomeStreams
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BiomeStreams/BMEventBase.h>
#import <libobjc.A.dylib/BMStoreData.h>
#import <libobjc.A.dylib/BMProtoBufWrapper.h>

@class BMHomeKitClientBase, NSString, NSDictionary, NSArray;

@interface BMHomeKitClientMediaAccessoryControlEvent : BMEventBase <BMStoreData, BMProtoBufWrapper> {

	BMHomeKitClientBase* _base;
	NSString* _accessoryUniqueIdentifier;
	NSDictionary* _accessoryStateString;
	NSDictionary* _accessoryStateNumber;
	NSDictionary* _accessoryStateData;
	NSString* _accessoryMediaRouteIdentifier;
	NSArray* _zoneUniqueIdentifiers;
	NSString* _roomUniqueIdentifier;
	NSString* _accessoryName;
	NSString* _roomName;
	NSArray* _zoneNames;
	NSString* _homeName;

}

@property (nonatomic,copy,readonly) NSString * accessoryName;                              //@synthesize accessoryName=_accessoryName - In the implementation block
@property (nonatomic,copy,readonly) NSString * roomName;                                   //@synthesize roomName=_roomName - In the implementation block
@property (nonatomic,copy,readonly) NSArray * zoneNames;                                   //@synthesize zoneNames=_zoneNames - In the implementation block
@property (nonatomic,copy,readonly) NSString * homeName;                                   //@synthesize homeName=_homeName - In the implementation block
@property (nonatomic,copy,readonly) BMHomeKitClientBase * base;                            //@synthesize base=_base - In the implementation block
@property (nonatomic,copy,readonly) NSString * accessoryUniqueIdentifier;                  //@synthesize accessoryUniqueIdentifier=_accessoryUniqueIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * accessoryStateString;                   //@synthesize accessoryStateString=_accessoryStateString - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * accessoryStateNumber;                   //@synthesize accessoryStateNumber=_accessoryStateNumber - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * accessoryStateData;                     //@synthesize accessoryStateData=_accessoryStateData - In the implementation block
@property (nonatomic,copy,readonly) NSString * accessoryMediaRouteIdentifier;              //@synthesize accessoryMediaRouteIdentifier=_accessoryMediaRouteIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSArray * zoneUniqueIdentifiers;                       //@synthesize zoneUniqueIdentifiers=_zoneUniqueIdentifiers - In the implementation block
@property (nonatomic,copy,readonly) NSString * roomUniqueIdentifier;                       //@synthesize roomUniqueIdentifier=_roomUniqueIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned dataVersion; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)eventWithData:(id)arg1 dataVersion:(unsigned)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(NSString *)accessoryName;
-(unsigned)dataVersion;
-(id)serialize;
-(NSString *)homeName;
-(NSString *)roomName;
-(BMHomeKitClientBase *)base;
-(NSArray *)zoneNames;
-(NSString *)accessoryUniqueIdentifier;
-(id)initWithBase:(id)arg1 accessoryUniqueIdentifier:(id)arg2 accessoryStateString:(id)arg3 accessoryStateNumber:(id)arg4 accessoryStateData:(id)arg5 accessoryMediaRouteIdentifier:(id)arg6 zoneUniqueIdentifiers:(id)arg7 roomUniqueIdentifier:(id)arg8 accessoryName:(id)arg9 roomName:(id)arg10 zoneNames:(id)arg11 homeName:(id)arg12 ;
-(id)proto;
-(id)initWithProto:(id)arg1 ;
-(id)encodeAsProto;
-(id)initWithProtoData:(id)arg1 ;
-(NSArray *)zoneUniqueIdentifiers;
-(NSString *)roomUniqueIdentifier;
-(NSString *)accessoryMediaRouteIdentifier;
-(NSDictionary *)accessoryStateString;
-(NSDictionary *)accessoryStateNumber;
-(NSDictionary *)accessoryStateData;
@end

