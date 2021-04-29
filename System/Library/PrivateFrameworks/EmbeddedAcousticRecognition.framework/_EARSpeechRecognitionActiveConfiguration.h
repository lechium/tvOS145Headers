/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:45 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <EmbeddedAcousticRecognition/EmbeddedAcousticRecognition-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSSet;

@interface _EARSpeechRecognitionActiveConfiguration : NSObject <NSCopying> {

	NSSet* _samplingRateFilter;
	NSSet* _taskTypeFilter;
	NSSet* _farFieldFilter;
	NSSet* _deviceIdFilter;
	NSSet* _bluetoothDeviceIdFilter;

}

@property (nonatomic,copy) NSSet * samplingRateFilter;                   //@synthesize samplingRateFilter=_samplingRateFilter - In the implementation block
@property (nonatomic,copy) NSSet * taskTypeFilter;                       //@synthesize taskTypeFilter=_taskTypeFilter - In the implementation block
@property (nonatomic,copy) NSSet * farFieldFilter;                       //@synthesize farFieldFilter=_farFieldFilter - In the implementation block
@property (nonatomic,copy) NSSet * deviceIdFilter;                       //@synthesize deviceIdFilter=_deviceIdFilter - In the implementation block
@property (nonatomic,copy) NSSet * bluetoothDeviceIdFilter;              //@synthesize bluetoothDeviceIdFilter=_bluetoothDeviceIdFilter - In the implementation block
+(id)activeConfigurationForEverything;
+(id)activeConfigurationForNothing;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SpeechRecognizerActiveConfiguration*)speechRecognizerActiveConfiguration;
-(id)_initWithActiveConfiguration:(const SpeechRecognizerActiveConfiguration*)arg1 ;
-(void)setSamplingRateFilter:(NSSet *)arg1 ;
-(void)setTaskTypeFilter:(NSSet *)arg1 ;
-(void)setFarFieldFilter:(NSSet *)arg1 ;
-(void)setDeviceIdFilter:(NSSet *)arg1 ;
-(void)setBluetoothDeviceIdFilter:(NSSet *)arg1 ;
-(NSSet *)samplingRateFilter;
-(NSSet *)taskTypeFilter;
-(NSSet *)farFieldFilter;
-(NSSet *)deviceIdFilter;
-(NSSet *)bluetoothDeviceIdFilter;
@end
