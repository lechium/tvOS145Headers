/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:01 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AutoBugCaptureCore.framework/AutoBugCaptureCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_source;
@class NSObject, NSNumber, NSString, NSUserDefaults;

@interface ABCPreferences : NSObject {

	BOOL _observedAutoBugCaptureUIPreference;
	BOOL _observingInstalledProfiles;
	NSObject*<OS_dispatch_source> _checkProfilesTimer;
	BOOL _diagnosticsAndUsageEnabled;
	BOOL _autoFeedbackAssistantEnable;
	BOOL _disable_internal_build;
	BOOL _optin_autobugcapture;
	BOOL _disable_autobugcapture;
	BOOL _dut_flag;
	BOOL _is_automated_device_group;
	BOOL _ignore_automated_device_group;
	BOOL _apns_enable;
	BOOL _apns_dev_environment;
	BOOL _arbitrator_disable_dampening;
	BOOL _disable_api_rate_limit;
	BOOL _cloudkit_enable;
	BOOL _ABCUserConsent;
	BOOL _abcUIUserConsent;
	BOOL _cloudkit_sandbox_environment;
	BOOL _cloudkit_prefers_anonymous;
	BOOL _case_summary_enable;
	NSNumber* _carrier_seed_flag;
	NSNumber* _seed_flag;
	NSNumber* _vendor_flag;
	NSString* _database_container_path;
	NSNumber* _npi_flag;
	long long _arbitrator_daily_count_limit;
	unsigned long long _max_upload_retries;
	unsigned long long _arbitrator_dampened_ips_limit;
	unsigned long long _dampening_restriction_factor;
	double _api_rate_limit;
	double _api_limit_window;
	unsigned long long _cloudkit_upload_expiration_timeout;
	unsigned long long _cloudkit_upload_connection_timeout;
	unsigned long long _cloudkit_upload_max_fallback_log_count;
	NSString* _cloudkit_container_identifier;
	NSString* _cloudkit_inverness_service;
	unsigned long long _case_summary_maximum_per_submission;
	unsigned long long _case_summary_submitted_retention_days;
	unsigned long long _case_summary_unsubmitted_retention_days;
	BOOL* _enable_cloudkit;
	NSUserDefaults* _automatedDeviceGroupDefaults;

}

@property (assign,nonatomic) BOOL disable_internal_build;                                             //@synthesize disable_internal_build=_disable_internal_build - In the implementation block
@property (nonatomic,retain) NSNumber * carrier_seed_flag;                                            //@synthesize carrier_seed_flag=_carrier_seed_flag - In the implementation block
@property (nonatomic,retain) NSNumber * seed_flag;                                                    //@synthesize seed_flag=_seed_flag - In the implementation block
@property (nonatomic,retain) NSNumber * vendor_flag;                                                  //@synthesize vendor_flag=_vendor_flag - In the implementation block
@property (nonatomic,retain) NSString * database_container_path;                                      //@synthesize database_container_path=_database_container_path - In the implementation block
@property (assign,nonatomic) BOOL optin_autobugcapture;                                               //@synthesize optin_autobugcapture=_optin_autobugcapture - In the implementation block
@property (assign,nonatomic) BOOL disable_autobugcapture;                                             //@synthesize disable_autobugcapture=_disable_autobugcapture - In the implementation block
@property (assign,nonatomic) BOOL dut_flag;                                                           //@synthesize dut_flag=_dut_flag - In the implementation block
@property (nonatomic,retain) NSNumber * npi_flag;                                                     //@synthesize npi_flag=_npi_flag - In the implementation block
@property (assign,nonatomic) BOOL is_automated_device_group;                                          //@synthesize is_automated_device_group=_is_automated_device_group - In the implementation block
@property (assign,nonatomic) BOOL ignore_automated_device_group;                                      //@synthesize ignore_automated_device_group=_ignore_automated_device_group - In the implementation block
@property (assign,nonatomic) BOOL abcUIUserConsent;                                                   //@synthesize abcUIUserConsent=_abcUIUserConsent - In the implementation block
@property (assign,nonatomic) BOOL ABCUserConsent;                                                     //@synthesize ABCUserConsent=_ABCUserConsent - In the implementation block
@property (assign,nonatomic) BOOL diagnosticsAndUsageEnabled;                                         //@synthesize diagnosticsAndUsageEnabled=_diagnosticsAndUsageEnabled - In the implementation block
@property (assign,nonatomic) BOOL autoFeedbackAssistantEnable;                                        //@synthesize autoFeedbackAssistantEnable=_autoFeedbackAssistantEnable - In the implementation block
@property (assign,nonatomic) BOOL arbitrator_disable_dampening;                                       //@synthesize arbitrator_disable_dampening=_arbitrator_disable_dampening - In the implementation block
@property (assign,nonatomic) BOOL apns_enable;                                                        //@synthesize apns_enable=_apns_enable - In the implementation block
@property (assign,nonatomic) BOOL apns_dev_environment;                                               //@synthesize apns_dev_environment=_apns_dev_environment - In the implementation block
@property (assign,nonatomic) long long arbitrator_daily_count_limit;                                  //@synthesize arbitrator_daily_count_limit=_arbitrator_daily_count_limit - In the implementation block
@property (assign,nonatomic) unsigned long long max_upload_retries;                                   //@synthesize max_upload_retries=_max_upload_retries - In the implementation block
@property (assign,nonatomic) unsigned long long arbitrator_dampened_ips_limit;                        //@synthesize arbitrator_dampened_ips_limit=_arbitrator_dampened_ips_limit - In the implementation block
@property (assign,nonatomic) unsigned long long dampening_restriction_factor;                         //@synthesize dampening_restriction_factor=_dampening_restriction_factor - In the implementation block
@property (assign,nonatomic) BOOL disable_api_rate_limit;                                             //@synthesize disable_api_rate_limit=_disable_api_rate_limit - In the implementation block
@property (assign,nonatomic) double api_rate_limit;                                                   //@synthesize api_rate_limit=_api_rate_limit - In the implementation block
@property (assign,nonatomic) BOOL* enable_cloudkit;                                                   //@synthesize enable_cloudkit=_enable_cloudkit - In the implementation block
@property (assign,nonatomic) double api_limit_window;                                                 //@synthesize api_limit_window=_api_limit_window - In the implementation block
@property (nonatomic,retain) NSUserDefaults * automatedDeviceGroupDefaults;                           //@synthesize automatedDeviceGroupDefaults=_automatedDeviceGroupDefaults - In the implementation block
@property (assign,nonatomic) BOOL cloudkit_enable;                                                    //@synthesize cloudkit_enable=_cloudkit_enable - In the implementation block
@property (assign,nonatomic) BOOL cloudkit_sandbox_environment;                                       //@synthesize cloudkit_sandbox_environment=_cloudkit_sandbox_environment - In the implementation block
@property (assign,nonatomic) unsigned long long cloudkit_upload_expiration_timeout;                   //@synthesize cloudkit_upload_expiration_timeout=_cloudkit_upload_expiration_timeout - In the implementation block
@property (assign,nonatomic) unsigned long long cloudkit_upload_connection_timeout;                   //@synthesize cloudkit_upload_connection_timeout=_cloudkit_upload_connection_timeout - In the implementation block
@property (assign,nonatomic) unsigned long long cloudkit_upload_max_fallback_log_count;               //@synthesize cloudkit_upload_max_fallback_log_count=_cloudkit_upload_max_fallback_log_count - In the implementation block
@property (nonatomic,retain) NSString * cloudkit_container_identifier;                                //@synthesize cloudkit_container_identifier=_cloudkit_container_identifier - In the implementation block
@property (nonatomic,retain) NSString * cloudkit_inverness_service;                                   //@synthesize cloudkit_inverness_service=_cloudkit_inverness_service - In the implementation block
@property (assign,nonatomic) BOOL cloudkit_prefers_anonymous;                                         //@synthesize cloudkit_prefers_anonymous=_cloudkit_prefers_anonymous - In the implementation block
@property (assign,nonatomic) unsigned long long case_summary_maximum_per_submission;                  //@synthesize case_summary_maximum_per_submission=_case_summary_maximum_per_submission - In the implementation block
@property (assign,nonatomic) unsigned long long case_summary_submitted_retention_days;                //@synthesize case_summary_submitted_retention_days=_case_summary_submitted_retention_days - In the implementation block
@property (assign,nonatomic) unsigned long long case_summary_unsubmitted_retention_days;              //@synthesize case_summary_unsubmitted_retention_days=_case_summary_unsubmitted_retention_days - In the implementation block
@property (assign,nonatomic) BOOL case_summary_enable;                                                //@synthesize case_summary_enable=_case_summary_enable - In the implementation block
+(id)initialValuesDictionary;
-(id)init;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSUserDefaults *)automatedDeviceGroupDefaults;
-(void)setAutomatedDeviceGroupDefaults:(NSUserDefaults *)arg1 ;
-(BOOL)autoFeedbackAssistantEnable;
-(void)setDiagnosticsAndUsageEnabled:(BOOL)arg1 ;
-(BOOL)diagnosticsAndUsageEnabled;
-(BOOL)disable_internal_build;
-(NSNumber *)carrier_seed_flag;
-(NSNumber *)seed_flag;
-(NSNumber *)vendor_flag;
-(NSNumber *)npi_flag;
-(void)setDisable_internal_build:(BOOL)arg1 ;
-(void)setCarrier_seed_flag:(NSNumber *)arg1 ;
-(void)setSeed_flag:(NSNumber *)arg1 ;
-(void)setVendor_flag:(NSNumber *)arg1 ;
-(void)setNpi_flag:(NSNumber *)arg1 ;
-(BOOL)disable_autobugcapture;
-(BOOL)optin_autobugcapture;
-(BOOL)ABCUserConsent;
-(BOOL)is_automated_device_group;
-(BOOL)ignore_automated_device_group;
-(NSString *)database_container_path;
-(unsigned long long)arbitrator_dampened_ips_limit;
-(unsigned long long)max_upload_retries;
-(long long)arbitrator_daily_count_limit;
-(BOOL)arbitrator_disable_dampening;
-(BOOL)dut_flag;
-(unsigned long long)dampening_restriction_factor;
-(BOOL)disable_api_rate_limit;
-(double)api_rate_limit;
-(BOOL)apns_enable;
-(BOOL)apns_dev_environment;
-(double)api_limit_window;
-(BOOL)cloudkit_enable;
-(BOOL)cloudkit_sandbox_environment;
-(NSString *)cloudkit_container_identifier;
-(NSString *)cloudkit_inverness_service;
-(BOOL)cloudkit_prefers_anonymous;
-(unsigned long long)cloudkit_upload_expiration_timeout;
-(unsigned long long)cloudkit_upload_connection_timeout;
-(unsigned long long)cloudkit_upload_max_fallback_log_count;
-(unsigned long long)case_summary_maximum_per_submission;
-(unsigned long long)case_summary_submitted_retention_days;
-(unsigned long long)case_summary_unsubmitted_retention_days;
-(BOOL)case_summary_enable;
-(void)setApns_enable:(BOOL)arg1 ;
-(void)setApns_dev_environment:(BOOL)arg1 ;
-(void)setDatabase_container_path:(NSString *)arg1 ;
-(void)setDisable_autobugcapture:(BOOL)arg1 ;
-(void)setOptin_autobugcapture:(BOOL)arg1 ;
-(void)setDut_flag:(BOOL)arg1 ;
-(void)setArbitrator_disable_dampening:(BOOL)arg1 ;
-(void)setArbitrator_daily_count_limit:(long long)arg1 ;
-(void)setMax_upload_retries:(unsigned long long)arg1 ;
-(void)setArbitrator_dampened_ips_limit:(unsigned long long)arg1 ;
-(void)setABCUserConsent:(BOOL)arg1 ;
-(void)setDampening_restriction_factor:(unsigned long long)arg1 ;
-(void)setDisable_api_rate_limit:(BOOL)arg1 ;
-(void)setApi_rate_limit:(double)arg1 ;
-(void)setApi_limit_window:(double)arg1 ;
-(void)setIs_automated_device_group:(BOOL)arg1 ;
-(void)setIgnore_automated_device_group:(BOOL)arg1 ;
-(void)setCloudkit_enable:(BOOL)arg1 ;
-(void)setCloudkit_sandbox_environment:(BOOL)arg1 ;
-(void)setCloudkit_container_identifier:(NSString *)arg1 ;
-(void)setCloudkit_inverness_service:(NSString *)arg1 ;
-(void)setCloudkit_upload_expiration_timeout:(unsigned long long)arg1 ;
-(void)setCloudkit_upload_connection_timeout:(unsigned long long)arg1 ;
-(void)setCloudkit_upload_max_fallback_log_count:(unsigned long long)arg1 ;
-(void)setCloudkit_prefers_anonymous:(BOOL)arg1 ;
-(void)setCase_summary_maximum_per_submission:(unsigned long long)arg1 ;
-(void)setCase_summary_submitted_retention_days:(unsigned long long)arg1 ;
-(void)setCase_summary_unsubmitted_retention_days:(unsigned long long)arg1 ;
-(void)setCase_summary_enable:(BOOL)arg1 ;
-(void)setAutoFeedbackAssistantEnable:(BOOL)arg1 ;
-(void)processInstalledVisibleProfileIdentifiers:(id)arg1 ;
-(void)setABCUIUserConsent:(BOOL)arg1 ;
-(BOOL)abcUIUserConsent;
-(void)setAbcUIUserConsent:(BOOL)arg1 ;
-(BOOL*)enable_cloudkit;
-(void)setEnable_cloudkit:(BOOL*)arg1 ;
@end

