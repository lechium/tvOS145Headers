/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:54 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AudioServerDriver.framework/AudioServerDriver
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSSet, NSArray;

@interface ASDAudioDeviceDSPConfiguration : NSObject {

	NSString* _name;
	NSSet* _underlyingDeviceProperties;
	NSSet* _dspDeviceProperties;
	NSArray* _inputDSP;
	NSArray* _outputDSP;

}

@property (nonatomic,readonly) NSString * name;                                 //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSSet * underlyingDeviceProperties;              //@synthesize underlyingDeviceProperties=_underlyingDeviceProperties - In the implementation block
@property (nonatomic,readonly) NSSet * dspDeviceProperties;                     //@synthesize dspDeviceProperties=_dspDeviceProperties - In the implementation block
@property (nonatomic,readonly) NSArray * inputDSP;                              //@synthesize inputDSP=_inputDSP - In the implementation block
@property (nonatomic,readonly) NSArray * outputDSP;                             //@synthesize outputDSP=_outputDSP - In the implementation block
-(NSString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSSet *)underlyingDeviceProperties;
-(NSSet *)dspDeviceProperties;
-(NSArray *)inputDSP;
-(NSArray *)outputDSP;
-(id)initWithDictionary:(id)arg1 resourcePath:(id)arg2 name:(id)arg3 ;
@end
