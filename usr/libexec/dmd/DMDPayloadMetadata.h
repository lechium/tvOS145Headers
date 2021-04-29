//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class DMDConfigurationOrganization, DMDPayload, NSDate, NSDictionary, NSSet, NSString;

@interface DMDPayloadMetadata : NSManagedObject
{
}

+ (_Bool)automaticallyNotifiesObserversOfLastStatusReportTimestamp;	// IMP=0x0000000100054ecc
+ (_Bool)automaticallyNotifiesObserversOfStateDictionary;	// IMP=0x0000000100054d1c
+ (id)keyPathsForValuesAffectingStatus;	// IMP=0x0000000100054c58
+ (id)metadataWithPayloadDictionary:(id)arg1 organizationIdentifier:(id)arg2 context:(id)arg3 error:(id *)arg4;	// IMP=0x0000000100054430
+ (id)fetchRequestForPayloadMetadatasPendingStatusUpdateFromOrganizationWithIdentifier:(id)arg1;	// IMP=0x000000010005437c
+ (id)fetchRequestForActivePayloadMetadatasFromOrganizationWithIdentifier:(id)arg1 withIdentifier:(id)arg2;	// IMP=0x00000001000542c4
+ (id)fetchRequestForPayloadMetadatasFromOrganizationWithIdentifier:(id)arg1 matchingPredicate:(id)arg2;	// IMP=0x0000000100054184
- (id)init;	// IMP=0x0000000100055530
- (id)initWithContext:(id)arg1;	// IMP=0x0000000100055414
- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;	// IMP=0x00000001000553e0
- (_Bool)validateForDelete:(id *)arg1;	// IMP=0x00000001000553ac
- (_Bool)validateForUpdate:(id *)arg1;	// IMP=0x0000000100055354
- (_Bool)validateForInsert:(id *)arg1;	// IMP=0x00000001000552fc
- (_Bool)validateProperties:(id *)arg1;	// IMP=0x0000000100055138
- (void)willSave;	// IMP=0x0000000100055024
@property(copy, nonatomic) NSDate *lastStatusReportTimestamp; // @dynamic lastStatusReportTimestamp;
@property(copy, nonatomic) NSDictionary *stateDictionary; // @dynamic stateDictionary;
- (void)setNeedsRefreshStatus;	// IMP=0x0000000100054d0c
@property(copy, nonatomic) NSString *status; // @dynamic status;
- (id)descriptiveProperties;	// IMP=0x0000000100054b34
- (id)description;	// IMP=0x0000000100054adc
- (void)applyPayloadDictionary:(id)arg1;	// IMP=0x0000000100054ad8

// Remaining properties
@property(nonatomic) _Bool available; // @dynamic available;
@property(copy, nonatomic) NSString *identifier; // @dynamic identifier;
@property(copy, nonatomic) NSSet *incomingPayloadMetadataReferences; // @dynamic incomingPayloadMetadataReferences;
@property(retain, nonatomic) id installMetadata; // @dynamic installMetadata;
@property(nonatomic) _Bool installed; // @dynamic installed;
@property(retain, nonatomic) DMDConfigurationOrganization *organization; // @dynamic organization;
@property(copy, nonatomic) NSSet *outgoingPayloadMetadataReferences; // @dynamic outgoingPayloadMetadataReferences;
@property(retain, nonatomic) DMDPayload *payload; // @dynamic payload;
@property(nonatomic) _Bool pendingStatusUpdate; // @dynamic pendingStatusUpdate;
@property(nonatomic) _Bool requiresNetworkTether; // @dynamic requiresNetworkTether;
@property(nonatomic) _Bool requiresUnlockedKeychain; // @dynamic requiresUnlockedKeychain;
@property(retain, nonatomic) NSDate *stateChangeTimestamp; // @dynamic stateChangeTimestamp;
@property(copy, nonatomic) NSString *type; // @dynamic type;

@end
