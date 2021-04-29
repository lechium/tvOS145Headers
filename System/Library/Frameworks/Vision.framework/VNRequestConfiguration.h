/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:09 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Vision/Vision-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class VNProcessingDevice;

@interface VNRequestConfiguration : NSObject <NSCopying> {

	BOOL _preferBackgroundProcessing;
	Class _requestClass;
	unsigned long long _resolvedRevision;
	unsigned long long _detectionLevel;
	VNProcessingDevice* _processingDevice;
	unsigned long long _metalContextPriority;
	unsigned long long _modelFileBackingStore;

}

@property (nonatomic,readonly) Class requestClass;                                  //@synthesize requestClass=_requestClass - In the implementation block
@property (assign,nonatomic) unsigned long long resolvedRevision;                   //@synthesize resolvedRevision=_resolvedRevision - In the implementation block
@property (assign,nonatomic) unsigned long long detectionLevel;                     //@synthesize detectionLevel=_detectionLevel - In the implementation block
@property (nonatomic,retain) VNProcessingDevice * processingDevice;                 //@synthesize processingDevice=_processingDevice - In the implementation block
@property (assign,nonatomic) unsigned long long metalContextPriority;               //@synthesize metalContextPriority=_metalContextPriority - In the implementation block
@property (assign,nonatomic) BOOL preferBackgroundProcessing;                       //@synthesize preferBackgroundProcessing=_preferBackgroundProcessing - In the implementation block
@property (assign,nonatomic) unsigned long long modelFileBackingStore;              //@synthesize modelFileBackingStore=_modelFileBackingStore - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(Class)requestClass;
-(void)setDetectionLevel:(unsigned long long)arg1 ;
-(id)initWithRequestClass:(Class)arg1 ;
-(VNProcessingDevice *)processingDevice;
-(BOOL)preferBackgroundProcessing;
-(void)setResolvedRevision:(unsigned long long)arg1 ;
-(unsigned long long)detectionLevel;
-(void)setPreferBackgroundProcessing:(BOOL)arg1 ;
-(unsigned long long)modelFileBackingStore;
-(void)setModelFileBackingStore:(unsigned long long)arg1 ;
-(unsigned long long)metalContextPriority;
-(void)setMetalContextPriority:(unsigned long long)arg1 ;
-(void)setProcessingDevice:(VNProcessingDevice *)arg1 ;
-(unsigned long long)resolvedRevision;
-(id)_allPropertyNames;
@end
