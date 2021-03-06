/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:11 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Vision/VNDetector.h>

@class VNEspressoResources;

@interface VNEspressoModelFileBasedDetector : VNDetector {

	VNEspressoResources* _espressoResources;
	unsigned long long _networkRequiredInputImageWidth;
	unsigned long long _networkRequiredInputImageHeight;

}

@property (nonatomic,readonly) VNEspressoResources * espressoResources;                         //@synthesize espressoResources=_espressoResources - In the implementation block
@property (nonatomic,readonly) unsigned long long networkRequiredInputImageWidth;               //@synthesize networkRequiredInputImageWidth=_networkRequiredInputImageWidth - In the implementation block
@property (nonatomic,readonly) unsigned long long networkRequiredInputImageHeight;              //@synthesize networkRequiredInputImageHeight=_networkRequiredInputImageHeight - In the implementation block
+(id)configurationOptionKeysForDetectorKey;
+(id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)arg1 ;
+(id)espressoModelFileNameForConfigurationOptions:(id)arg1 ;
+(id)keyForDetectorWithConfigurationOptions:(id)arg1 ;
-(BOOL)supportsProcessingDevice:(id)arg1 ;
-(BOOL)completeInitializationForSession:(id)arg1 error:(id*)arg2 ;
-(BOOL)_loadEspressoModelWithConfigurationOptions:(id)arg1 error:(id*)arg2 ;
-(int)espressoModelNetworkLayersStorageTypeForConfigurationOptions:(id)arg1 ;
-(BOOL)getWidth:(unsigned long long*)arg1 height:(unsigned long long*)arg2 ofEspressoModelNetworkBlobNamed:(id)arg3 error:(id*)arg4 ;
-(VNEspressoResources *)espressoResources;
-(unsigned long long)networkRequiredInputImageWidth;
-(unsigned long long)networkRequiredInputImageHeight;
@end

