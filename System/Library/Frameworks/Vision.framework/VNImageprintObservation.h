/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:10 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Vision/Vision-Structs.h>
#import <Vision/VNObservation.h>

@class VNImageprint, NSString, NSData;

@interface VNImageprintObservation : VNObservation {

	BOOL _imageprintValid;
	VNImageprint* _imageprint;
	NSString* _imageprintVersion;

}

@property (nonatomic,retain) VNImageprint * imageprint;                        //@synthesize imageprint=_imageprint - In the implementation block
@property (nonatomic,readonly) BOOL imageprintValid;                           //@synthesize imageprintValid=_imageprintValid - In the implementation block
@property (nonatomic,copy,readonly) NSString * imageprintVersion;              //@synthesize imageprintVersion=_imageprintVersion - In the implementation block
@property (nonatomic,readonly) NSData * rawImageprintDescriptor; 
+(BOOL)supportsSecureCoding;
+(id)observationWithImageprint:(id)arg1 error:(id*)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(float)calculateDistanceFromImageprintObservation:(id)arg1 ;
-(BOOL)isImageprintValid;
-(id)initWithRawImageprintDescriptor:(id)arg1 ;
-(NSData *)rawImageprintDescriptor;
-(VNImageprint *)imageprint;
-(void)setImageprint:(VNImageprint *)arg1 ;
-(BOOL)imageprintValid;
-(NSString *)imageprintVersion;
@end

