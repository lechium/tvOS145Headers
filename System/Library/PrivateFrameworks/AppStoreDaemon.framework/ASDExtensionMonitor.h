/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:02 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AppStoreDaemon/AppStoreDaemon-Structs.h>
@class NSDictionary, NSArray;

@interface ASDExtensionMonitor : NSObject {

	NSDictionary* _extensionAttributes;
	id _matchingContext;
	os_unfair_lock_s _lock;
	NSArray* _extensions;
	/*^block*/id _updateHandler;

}

@property (readonly) NSArray * extensions; 
@property (nonatomic,copy) id updateHandler; 
-(void)dealloc;
-(void)setUpdateHandler:(id)arg1 ;
-(id)initWithAttributes:(id)arg1 ;
-(NSArray *)extensions;
-(id)updateHandler;
-(void)_startMonitoringExtensions;
-(void)_stopMonitoringExtensions;
@end

