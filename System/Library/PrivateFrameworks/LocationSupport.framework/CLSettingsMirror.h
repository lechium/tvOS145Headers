/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:45 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/LocationSupport.framework/LocationSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <LocationSupport/CLSettingsDictionary.h>
#import <libobjc.A.dylib/CLSettingsManagerClientProtocol.h>

@protocol CLSettingsManagerProtocol;
@class CLIntersiloUniverse, NSString;

@interface CLSettingsMirror : CLSettingsDictionary <CLSettingsManagerClientProtocol> {

	BOOL _valid;
	/*^block*/id _settingsChangeHandler;
	id<CLSettingsManagerProtocol> _manager;
	CLIntersiloUniverse* _universe;

}

@property (nonatomic,retain) id<CLSettingsManagerProtocol> manager;              //@synthesize manager=_manager - In the implementation block
@property (nonatomic,retain) CLIntersiloUniverse * universe;                     //@synthesize universe=_universe - In the implementation block
@property (nonatomic,copy) id settingsChangeHandler;                             //@synthesize settingsChangeHandler=_settingsChangeHandler - In the implementation block
@property (assign,nonatomic) BOOL valid;                                         //@synthesize valid=_valid - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)invalidate;
-(BOOL)valid;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(void)setLong:(long long)arg1 forKey:(id)arg2 ;
-(void)setFloat:(float)arg1 forKey:(id)arg2 ;
-(void)setDouble:(double)arg1 forKey:(id)arg2 ;
-(void)setBool:(BOOL)arg1 forKey:(id)arg2 ;
-(id<CLSettingsManagerProtocol>)manager;
-(void)setString:(id)arg1 forKey:(id)arg2 ;
-(void)setArray:(id)arg1 forKey:(id)arg2 ;
-(void)setDictionary:(id)arg1 forKey:(id)arg2 ;
-(void)setValid:(BOOL)arg1 ;
-(void)setManager:(id<CLSettingsManagerProtocol>)arg1 ;
-(CLIntersiloUniverse *)universe;
-(void)setInt:(int)arg1 forKey:(id)arg2 ;
-(void)setUniverse:(CLIntersiloUniverse *)arg1 ;
-(void)setSettingsChangeHandler:(id)arg1 ;
-(void)didUpdateSettings:(id)arg1 ;
-(id)initInUniverse:(id)arg1 ;
-(void)setShort:(short)arg1 forKey:(id)arg2 ;
-(id)settingsChangeHandler;
@end

