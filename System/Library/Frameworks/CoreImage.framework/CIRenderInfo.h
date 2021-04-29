/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:20 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface CIRenderInfo : NSObject {

	void* _priv;

}

@property (readonly) double kernelExecutionTime; 
@property (readonly) long long passCount; 
@property (readonly) long long pixelsProcessed; 
+(id)renderInfoWithCompletedTask:(id)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(id)_pdfDataRepresentation;
-(double)kernelExecutionTime;
-(id)initWithCompletedTask:(id)arg1 ;
-(long long)kernelExecutionCycles;
-(long long)passCount;
-(long long)pixelsProcessed;
-(long long)pixelsOverdrawn;
-(double)timeForNodeID:(unsigned long long)arg1 ;
@end

