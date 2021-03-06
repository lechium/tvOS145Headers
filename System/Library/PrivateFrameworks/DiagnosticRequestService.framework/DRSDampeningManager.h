/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:28 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/DiagnosticRequestService.framework/DiagnosticRequestService
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class DRSDampeningConfiguration, DRSDampeningEnforcementSettings, NSMutableDictionary, NSDictionary, NSPersistentContainer, NSObject;

@interface DRSDampeningManager : NSObject {

	DRSDampeningConfiguration* _defaultSignatureConfiguration;
	DRSDampeningEnforcementSettings* _enforcementSettings;
	unsigned long long _totalCap;
	NSMutableDictionary* _teamDampeningConfigDict;
	NSDictionary* _resourceDampeningConfigDict;
	NSPersistentContainer* _persistentContainer;
	NSObject*<OS_dispatch_queue> _workQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;                                 //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) DRSDampeningConfiguration * defaultSignatureConfiguration;              //@synthesize defaultSignatureConfiguration=_defaultSignatureConfiguration - In the implementation block
@property (nonatomic,readonly) DRSDampeningEnforcementSettings * enforcementSettings;                //@synthesize enforcementSettings=_enforcementSettings - In the implementation block
@property (assign,nonatomic) unsigned long long totalCap;                                            //@synthesize totalCap=_totalCap - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * teamDampeningConfigDict;                        //@synthesize teamDampeningConfigDict=_teamDampeningConfigDict - In the implementation block
@property (nonatomic,readonly) NSDictionary * resourceDampeningConfigDict;                           //@synthesize resourceDampeningConfigDict=_resourceDampeningConfigDict - In the implementation block
@property (nonatomic,retain) NSPersistentContainer * persistentContainer;                            //@synthesize persistentContainer=_persistentContainer - In the implementation block
+(id)_entityName;
+(BOOL)removeExistingDampeningManagerStateFromManagedObjectContext:(id)arg1 errorOut:(id*)arg2 ;
+(BOOL)passesAcceptanceRate:(double)arg1 ;
+(id)defaultResourceConfigurations:(BOOL)arg1 isSeed:(BOOL)arg2 isCarrier:(BOOL)arg3 platform:(unsigned char)arg4 ;
+(id)defaultTeamConfigurations:(BOOL)arg1 isSeed:(BOOL)arg2 isCarrier:(BOOL)arg3 platform:(unsigned char)arg4 ;
+(unsigned long long)defaultTotalCapForCurrentDevice;
+(unsigned long long)defaultTotalCapForIsInternal:(BOOL)arg1 isSeed:(BOOL)arg2 isCarrier:(BOOL)arg3 ;
+(id)defaultTeamConfigurationsForCurrentDevice;
+(id)_nandTeamConfiguration:(BOOL)arg1 isSeed:(BOOL)arg2 isCarrier:(BOOL)arg3 platform:(unsigned char)arg4 ;
+(id)_hangTracerTeamConfiguration:(BOOL)arg1 isSeed:(BOOL)arg2 isCarrier:(BOOL)arg3 platform:(unsigned char)arg4 ;
+(id)_memoryToolsTeamConfiguration:(BOOL)arg1 isSeed:(BOOL)arg2 isCarrier:(BOOL)arg3 platform:(unsigned char)arg4 ;
+(id)_sentryTeamConfiguration:(BOOL)arg1 isSeed:(BOOL)arg2 isCarrier:(BOOL)arg3 platform:(unsigned char)arg4 ;
+(id)_defaultTailspinConfiguration:(BOOL)arg1 isSeed:(BOOL)arg2 isCarrier:(BOOL)arg3 platform:(unsigned char)arg4 ;
+(id)defaultResourceConfigurationsForCurrentDevice;
+(id)_ON_MOC_QUEUE_existingMOFromContext:(id)arg1 errorOut:(id*)arg2 ;
+(id)defaultTeamConfigurationForTeamForCurrentDevice:(id)arg1 ;
+(id)defaultTeamConfigurationForTeam:(id)arg1 isInternal:(BOOL)arg2 isSeed:(BOOL)arg3 isCarrier:(BOOL)arg4 platform:(unsigned char)arg5 ;
+(id)dampeningManagerFromPersistentContainer:(id)arg1 deleteBadState:(BOOL)arg2 errorOut:(id*)arg3 ;
-(id)debugDescription;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSPersistentContainer *)persistentContainer;
-(void)setPersistentContainer:(NSPersistentContainer *)arg1 ;
-(id)initWithPersistentContainer:(id)arg1 ;
-(BOOL)saveToPersistentContainerWithErrorOut:(id*)arg1 ;
-(DRSDampeningEnforcementSettings *)enforcementSettings;
-(DRSDampeningConfiguration *)defaultSignatureConfiguration;
-(void)setDefaultSignatureConfiguration:(DRSDampeningConfiguration *)arg1 ;
-(unsigned long long)dampeningOutcomeForRequest:(id)arg1 ;
-(id)jsonCompatibleDictRepresentation;
-(NSMutableDictionary *)teamDampeningConfigDict;
-(NSDictionary *)resourceDampeningConfigDict;
-(unsigned long long)totalCap;
-(id)initWithPersistentContainer:(id)arg1 enforcementSettings:(id)arg2 defaultSignatureConfiguration:(id)arg3 totalCap:(unsigned long long)arg4 teamDampeningConfigDict:(id)arg5 resourceDampeningConfigDict:(id)arg6 ;
-(id)_predicateForUndampenedRequestsMatchingSignatureOfRequest:(id)arg1 afterDate:(id)arg2 ;
-(BOOL)_hasRequestsRecordCountGreaterThanOrEqualToThreshold:(unsigned long long)arg1 matchingPredicate:(id)arg2 inContext:(id)arg3 filterToObjectsMatchingClassOfRequest:(id)arg4 ;
-(BOOL)_request:(id)arg1 passesHysteresis:(double)arg2 countCap:(unsigned long long)arg3 usesSignature:(BOOL)arg4 usesRequestClass:(BOOL)arg5 managedObjectContext:(id)arg6 ;
-(double)_24HoursHysteresis;
-(id)dampeningConfigurationForResource:(id)arg1 ;
-(id)_resourceConfigurationForRequest:(id)arg1 ;
-(BOOL)_passesResourceHysteresis:(id)arg1 config:(id)arg2 managedObjectContext:(id)arg3 ;
-(BOOL)_passesResourceCap:(id)arg1 config:(id)arg2 managedObjectContext:(id)arg3 ;
-(BOOL)_passesResourceRandomDownsampling:(id)arg1 config:(id)arg2 ;
-(id)dampeningConfigurationForRequestSignature:(id)arg1 ;
-(BOOL)_passesSignatureHysteresis:(id)arg1 config:(id)arg2 managedObjectContext:(id)arg3 ;
-(BOOL)_passesSignatureCap:(id)arg1 config:(id)arg2 managedObjectContext:(id)arg3 ;
-(BOOL)_passesSignatureRandomDownsampling:(id)arg1 config:(id)arg2 ;
-(BOOL)_passesTotalCap:(id)arg1 managedObjectContext:(id)arg2 ;
-(id)dampeningConfigurationForTeamID:(id)arg1 issueCategory:(id)arg2 ;
-(id)_ON_MOC_QUEUE_initWith:(id)arg1 persistentContainer:(id)arg2 ;
-(void)setTotalCap:(unsigned long long)arg1 ;
-(id)_ON_MOC_QUEUE_moRepresentationInContext:(id)arg1 ;
-(BOOL)isEqualToDampeningManager:(id)arg1 ;
-(id)initWithIsInternal:(BOOL)arg1 isSeed:(BOOL)arg2 isCarrier:(BOOL)arg3 platform:(unsigned char)arg4 ;
@end

