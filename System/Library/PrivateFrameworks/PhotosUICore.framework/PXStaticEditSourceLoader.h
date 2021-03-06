/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:30 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PXEditSourceLoader.h>

@class NSProgress, PLEditSource, NSString, NSError, NSNumber;

@interface PXStaticEditSourceLoader : NSObject <PXEditSourceLoader> {

	PLEditSource* _editSource;
	PLEditSource* _overcaptureEditSource;
	long long _baseVersion;
	NSProgress* _progress;
	NSError* _error;
	NSString* _contentIdentifier;
	NSString* _livePhotoPairingIdentifier;

}

@property (nonatomic,readonly) NSProgress * progress;                                   //@synthesize progress=_progress - In the implementation block
@property (nonatomic,readonly) PLEditSource * editSource;                               //@synthesize editSource=_editSource - In the implementation block
@property (nonatomic,readonly) PLEditSource * overcaptureEditSource;                    //@synthesize overcaptureEditSource=_overcaptureEditSource - In the implementation block
@property (nonatomic,readonly) PLEditSource * activeEditSource; 
@property (nonatomic,copy,readonly) NSString * livePhotoPairingIdentifier;              //@synthesize livePhotoPairingIdentifier=_livePhotoPairingIdentifier - In the implementation block
@property (nonatomic,readonly) long long baseVersion;                                   //@synthesize baseVersion=_baseVersion - In the implementation block
@property (nonatomic,readonly) NSError * error;                                         //@synthesize error=_error - In the implementation block
@property (nonatomic,copy,readonly) NSString * contentIdentifier;                       //@synthesize contentIdentifier=_contentIdentifier - In the implementation block
@property (nonatomic,readonly) NSNumber * loadDuration; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSError *)error;
-(NSProgress *)progress;
-(long long)baseVersion;
-(NSString *)contentIdentifier;
-(NSString *)livePhotoPairingIdentifier;
-(PLEditSource *)editSource;
-(PLEditSource *)overcaptureEditSource;
-(void)beginLoading;
-(NSNumber *)loadDuration;
-(id)initWithEditSource:(id)arg1 compositionController:(id)arg2 baseVersion:(long long)arg3 contentIdentifier:(id)arg4 ;
@end

