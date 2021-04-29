/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:26 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class CADChangeTrackingClientId, NSString;

@interface CADDatabaseInitializationOptions : NSObject <NSSecureCoding> {

	BOOL _enablePropertyModificationLogging;
	BOOL _unitTesting;
	BOOL _allowDelegateSources;
	int _databaseInitOptions;
	int _management;
	CADChangeTrackingClientId* _changeTrackingClientId;
	NSString* _managementBundleIdentifier;
	NSString* _databasePath;

}

@property (assign,nonatomic) int databaseInitOptions;                                         //@synthesize databaseInitOptions=_databaseInitOptions - In the implementation block
@property (nonatomic,retain) CADChangeTrackingClientId * changeTrackingClientId;              //@synthesize changeTrackingClientId=_changeTrackingClientId - In the implementation block
@property (assign,nonatomic) BOOL enablePropertyModificationLogging;                          //@synthesize enablePropertyModificationLogging=_enablePropertyModificationLogging - In the implementation block
@property (assign,nonatomic) int management;                                                  //@synthesize management=_management - In the implementation block
@property (nonatomic,retain) NSString * managementBundleIdentifier;                           //@synthesize managementBundleIdentifier=_managementBundleIdentifier - In the implementation block
@property (nonatomic,retain) NSString * databasePath;                                         //@synthesize databasePath=_databasePath - In the implementation block
@property (assign,nonatomic) BOOL unitTesting;                                                //@synthesize unitTesting=_unitTesting - In the implementation block
@property (assign,nonatomic) BOOL allowDelegateSources;                                       //@synthesize allowDelegateSources=_allowDelegateSources - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)databasePath;
-(void)setUnitTesting:(BOOL)arg1 ;
-(BOOL)unitTesting;
-(CADChangeTrackingClientId *)changeTrackingClientId;
-(BOOL)isEqualToOptions:(id)arg1 ;
-(int)databaseInitOptions;
-(void)setDatabaseInitOptions:(int)arg1 ;
-(void)setChangeTrackingClientId:(CADChangeTrackingClientId *)arg1 ;
-(BOOL)enablePropertyModificationLogging;
-(void)setEnablePropertyModificationLogging:(BOOL)arg1 ;
-(int)management;
-(void)setManagement:(int)arg1 ;
-(NSString *)managementBundleIdentifier;
-(void)setManagementBundleIdentifier:(NSString *)arg1 ;
-(void)setDatabasePath:(NSString *)arg1 ;
-(BOOL)allowDelegateSources;
-(void)setAllowDelegateSources:(BOOL)arg1 ;
-(id)validOptionsForConnection:(id)arg1 ;
@end

