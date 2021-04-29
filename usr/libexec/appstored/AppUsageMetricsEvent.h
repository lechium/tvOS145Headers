//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleMediaServices/AMSMetricsEvent.h>

@class NSArray, NSNumber, NSString;

@interface AppUsageMetricsEvent : AMSMetricsEvent
{
    NSNumber *_appSessionReporterKeyRepaired;	// 8 = 0x8
    NSNumber *_beta;	// 16 = 0x10
    unsigned char _appEventType;	// 24 = 0x18
    _Bool _clip;	// 25 = 0x19
    _Bool _hasBeenPosted;	// 26 = 0x1a
    unsigned char _installationType;	// 27 = 0x1b
    unsigned char _installType;	// 28 = 0x1c
    NSString *_tempUserId;	// 32 = 0x20
    NSString *_tempDeviceIdentifer;	// 40 = 0x28
    NSString *_actorID;	// 48 = 0x30
    NSString *_appSessionReporterKey;	// 56 = 0x38
    long long _appUsageType;	// 64 = 0x40
    NSString *_bundleID;	// 72 = 0x48
    NSString *_bundleVersion;	// 80 = 0x50
    NSString *_clientEventID;	// 88 = 0x58
    NSString *_clipAppType;	// 96 = 0x60
    NSArray *_clusters;	// 104 = 0x68
    NSString *_cohort;	// 112 = 0x70
    NSNumber *_collectionTime;	// 120 = 0x78
    long long _cumulativeUserCount;	// 128 = 0x80
    long long _databaseID;	// 136 = 0x88
    long long _duration;	// 144 = 0x90
    NSNumber *_evid;	// 152 = 0x98
    NSNumber *_eventTimeOverride;	// 160 = 0xa0
    NSArray *_foregroundEvents;	// 168 = 0xa8
    NSString *_hardwareFamily;	// 176 = 0xb0
    NSString *_hardwareModel;	// 184 = 0xb8
    NSNumber *_itemID;	// 192 = 0xc0
    NSString *_itemName;	// 200 = 0xc8
    NSString *_ocelotDeviceID;	// 208 = 0xd0
    NSString *_ocelotID;	// 216 = 0xd8
    NSString *_ocelotSubscriptionState;	// 224 = 0xe0
    NSString *_OS;	// 232 = 0xe8
    NSString *_osBuild;	// 240 = 0xf0
    NSString *_platform;	// 248 = 0xf8
    NSString *_shortVersion;	// 256 = 0x100
    NSNumber *_startTime;	// 264 = 0x108
    NSNumber *_storefront;	// 272 = 0x110
    long long _timeRangeEnd;	// 280 = 0x118
    long long _timeRangeStart;	// 288 = 0x120
    long long _usageTime;	// 296 = 0x128
    long long _usageCount;	// 304 = 0x130
    long long _qualifiedDuration;	// 312 = 0x138
    NSString *_weekStartDate;	// 320 = 0x140
}

- (void).cxx_destruct;	// IMP=0x00000001002582c0
@property(copy, nonatomic) NSString *weekStartDate; // @synthesize weekStartDate=_weekStartDate;
@property(nonatomic) long long qualifiedDuration; // @synthesize qualifiedDuration=_qualifiedDuration;
@property(nonatomic) long long usageCount; // @synthesize usageCount=_usageCount;
@property(nonatomic) long long usageTime; // @synthesize usageTime=_usageTime;
@property(nonatomic) long long timeRangeStart; // @synthesize timeRangeStart=_timeRangeStart;
@property(nonatomic) long long timeRangeEnd; // @synthesize timeRangeEnd=_timeRangeEnd;
@property(copy, nonatomic) NSNumber *storefront; // @synthesize storefront=_storefront;
@property(copy, nonatomic) NSNumber *startTime; // @synthesize startTime=_startTime;
@property(copy, nonatomic) NSString *shortVersion; // @synthesize shortVersion=_shortVersion;
@property(copy, nonatomic) NSString *platform; // @synthesize platform=_platform;
@property(copy, nonatomic) NSString *osBuild; // @synthesize osBuild=_osBuild;
@property(copy, nonatomic) NSString *OS; // @synthesize OS=_OS;
@property(copy, nonatomic) NSString *ocelotSubscriptionState; // @synthesize ocelotSubscriptionState=_ocelotSubscriptionState;
@property(copy, nonatomic) NSString *ocelotID; // @synthesize ocelotID=_ocelotID;
@property(copy, nonatomic) NSString *ocelotDeviceID; // @synthesize ocelotDeviceID=_ocelotDeviceID;
@property(copy, nonatomic) NSString *itemName; // @synthesize itemName=_itemName;
@property(copy, nonatomic) NSNumber *itemID; // @synthesize itemID=_itemID;
@property(nonatomic) unsigned char installType; // @synthesize installType=_installType;
@property(nonatomic) unsigned char installationType; // @synthesize installationType=_installationType;
@property(nonatomic) _Bool hasBeenPosted; // @synthesize hasBeenPosted=_hasBeenPosted;
@property(copy, nonatomic) NSString *hardwareModel; // @synthesize hardwareModel=_hardwareModel;
@property(copy, nonatomic) NSString *hardwareFamily; // @synthesize hardwareFamily=_hardwareFamily;
@property(copy, nonatomic) NSArray *foregroundEvents; // @synthesize foregroundEvents=_foregroundEvents;
@property(copy, nonatomic) NSNumber *eventTimeOverride; // @synthesize eventTimeOverride=_eventTimeOverride;
@property(copy, nonatomic) NSNumber *evid; // @synthesize evid=_evid;
@property(nonatomic) long long duration; // @synthesize duration=_duration;
@property(nonatomic) long long databaseID; // @synthesize databaseID=_databaseID;
@property(nonatomic) long long cumulativeUserCount; // @synthesize cumulativeUserCount=_cumulativeUserCount;
@property(copy, nonatomic) NSNumber *collectionTime; // @synthesize collectionTime=_collectionTime;
@property(copy, nonatomic) NSString *cohort; // @synthesize cohort=_cohort;
@property(copy, nonatomic) NSArray *clusters; // @synthesize clusters=_clusters;
@property(copy, nonatomic) NSString *clipAppType; // @synthesize clipAppType=_clipAppType;
@property(nonatomic, getter=isClip) _Bool clip; // @synthesize clip=_clip;
@property(copy, nonatomic) NSString *clientEventID; // @synthesize clientEventID=_clientEventID;
@property(copy, nonatomic) NSString *bundleVersion; // @synthesize bundleVersion=_bundleVersion;
@property(copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(nonatomic) long long appUsageType; // @synthesize appUsageType=_appUsageType;
@property(copy, nonatomic) NSString *appSessionReporterKey; // @synthesize appSessionReporterKey=_appSessionReporterKey;
@property(nonatomic) unsigned char appEventType; // @synthesize appEventType=_appEventType;
@property(copy, nonatomic) NSString *actorID; // @synthesize actorID=_actorID;
@property(copy, nonatomic) NSString *tempDeviceIdentifer; // @synthesize tempDeviceIdentifer=_tempDeviceIdentifer;
@property(copy, nonatomic) NSString *tempUserId; // @synthesize tempUserId=_tempUserId;
- (id)_typeForMetricsType:(unsigned char)arg1;	// IMP=0x0000000100257f34
- (id)_metricsTypeForInstallationType:(unsigned char)arg1;	// IMP=0x0000000100257f08
- (id)_eventForType:(unsigned char)arg1;	// IMP=0x0000000100257e74
- (_Bool)requiresDiagnosticSendingPermission;	// IMP=0x0000000100257e6c
- (id)metricsDictionary;	// IMP=0x0000000100257998
@property(nonatomic, getter=isBeta) _Bool beta;
@property(nonatomic, getter=isAppSessionReporterKeyRepaired) _Bool appSessionReporterKeyRepaired;
- (id)externalMapping;	// IMP=0x0000000100256654
- (id)description;	// IMP=0x00000001002565e0

@end
