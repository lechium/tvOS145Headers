/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:27 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/MTLModel.h>
#import <libobjc.A.dylib/MTLJSONSerializing.h>

@class NSUUID, NSNumber, NSDictionary, NSString;

@interface VCIntentDefinitionSyncState : MTLModel <MTLJSONSerializing> {

	NSUUID* _databaseUUID;
	NSNumber* _sequenceNumber;
	NSDictionary* _applications;

}

@property (nonatomic,copy) NSUUID * databaseUUID;                                //@synthesize databaseUUID=_databaseUUID - In the implementation block
@property (nonatomic,copy) NSNumber * sequenceNumber;                            //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
@property (nonatomic,copy) NSDictionary * applications;                          //@synthesize applications=_applications - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * dictionaryValue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)JSONKeyPathsByPropertyKey;
+(id)applicationsJSONTransformer;
-(NSNumber *)sequenceNumber;
-(void)setSequenceNumber:(NSNumber *)arg1 ;
-(NSUUID *)databaseUUID;
-(void)setDatabaseUUID:(NSUUID *)arg1 ;
-(NSDictionary *)applications;
-(void)setApplications:(NSDictionary *)arg1 ;
@end

