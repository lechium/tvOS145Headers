/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:35 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVMovieTrack.h>

@class AVMutableMovieTrackInternal, NSArray, AVMediaDataStorage, NSURL;

@interface AVMutableMovieTrack : AVMovieTrack {

	AVMutableMovieTrackInternal* _mutableMovieTrackInternal;

}

@property (nonatomic,readonly) NSArray * formatDescriptions; 
@property (nonatomic,copy) NSArray * metadata; 
@property (nonatomic,copy) AVMediaDataStorage * mediaDataStorage; 
@property (nonatomic,copy) NSURL * sampleReferenceBaseURL; 
@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
@property (assign,nonatomic) long long alternateGroupID; 
@property (assign,getter=isModified,nonatomic) BOOL modified; 
@property (nonatomic,readonly) BOOL hasProtectedContent; 
@property (assign,nonatomic) int timescale; 
+(BOOL)expectsPropertyRevisedNotifications;
+(id)trackWithTrackID:(int)arg1 forMovie:(id)arg2 ;
-(id)description;
-(void)dealloc;
-(void)setEnabled:(BOOL)arg1 ;
-(id)locale;
-(id)languageCode;
-(BOOL)isEnabled;
-(NSArray *)metadata;
-(BOOL)hasProtectedContent;
-(void)setMetadata:(NSArray *)arg1 ;
-(long long)layer;
-(void)setLayer:(long long)arg1 ;
-(int)trackID;
-(void)setLanguageCode:(id)arg1 ;
-(CGSize)dimensions;
-(NSArray *)formatDescriptions;
-(id)extendedLanguageTag;
-(void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(CGAffineTransform)preferredTransform;
-(CGSize)naturalSize;
-(long long)statusOfValueForKey:(id)arg1 error:(id*)arg2 ;
-(void)scaleTimeRange:(SCD_Struct_AV7)arg1 toDuration:(SCD_Struct_AV6)arg2 ;
-(void)setPreferredTransform:(CGAffineTransform)arg1 ;
-(BOOL)isModified;
-(id)metadataForFormat:(id)arg1 ;
-(void)setModified:(BOOL)arg1 ;
-(id)availableMetadataFormats;
-(void)setExtendedLanguageTag:(id)arg1 ;
-(void)setNaturalSize:(CGSize)arg1 ;
-(void)insertEmptyTimeRange:(SCD_Struct_AV7)arg1 ;
-(int)timescale;
-(void)setTimescale:(int)arg1 ;
-(void)removeTimeRange:(SCD_Struct_AV7)arg1 ;
-(float)preferredVolume;
-(OpaqueFigAssetTrackRef)_figAssetTrack;
-(SCD_Struct_AV7)mediaPresentationTimeRange;
-(SCD_Struct_AV7)mediaDecodeTimeRange;
-(long long)alternateGroupID;
-(void)setPreferredVolume:(float)arg1 ;
-(void)setAlternateGroupID:(long long)arg1 ;
-(void)replaceFormatDescription:(opaqueCMFormatDescriptionRef)arg1 withFormatDescription:(opaqueCMFormatDescriptionRef)arg2 ;
-(void)addTrackAssociationToTrack:(id)arg1 type:(id)arg2 ;
-(void)removeTrackAssociationToTrack:(id)arg1 type:(id)arg2 ;
-(SCD_Struct_AV6)preferredMediaChunkDuration;
-(void)setPreferredMediaChunkDuration:(SCD_Struct_AV6)arg1 ;
-(long long)preferredMediaChunkAlignment;
-(void)setPreferredMediaChunkAlignment:(long long)arg1 ;
-(long long)preferredMediaChunkSize;
-(void)setPreferredMediaChunkSize:(long long)arg1 ;
-(NSURL *)sampleReferenceBaseURL;
-(void)setSampleReferenceBaseURL:(NSURL *)arg1 ;
-(AVMediaDataStorage *)mediaDataStorage;
-(id)initWithTrackID:(int)arg1 forMovie:(id)arg2 ;
-(OpaqueFigMutableMovieRef)_figMutableMovie;
-(void)_addFigAssetTrackNotifications;
-(void)_removeFigAssetTrackNotifications;
-(id)_stringForProperty:(CFStringRef)arg1 ;
-(CGSize)_sizeForProperty:(CFStringRef)arg1 ;
-(void)_setString:(id)arg1 forProperty:(CFStringRef)arg2 ;
-(void)_setSize:(CGSize)arg1 forProperty:(CFStringRef)arg2 ;
-(void)_signalMetadataUpdated;
-(CGSize)cleanApertureDimensions;
-(CGSize)productionApertureDimensions;
-(CGSize)encodedPixelsDimensions;
-(void)setMediaDataStorage:(AVMediaDataStorage *)arg1 ;
-(void)setCleanApertureDimensions:(CGSize)arg1 ;
-(void)setProductionApertureDimensions:(CGSize)arg1 ;
-(void)setEncodedPixelsDimensions:(CGSize)arg1 ;
-(BOOL)isCompatibleWithFormatDescription:(opaqueCMFormatDescriptionRef)arg1 ;
-(BOOL)insertTimeRange:(SCD_Struct_AV7)arg1 ofTrack:(id)arg2 atTime:(SCD_Struct_AV6)arg3 copySampleData:(BOOL)arg4 error:(id*)arg5 ;
-(BOOL)appendSampleBuffer:(opaqueCMSampleBufferRef)arg1 decodeTime:(SCD_Struct_AV6*)arg2 presentationTime:(SCD_Struct_AV6*)arg3 error:(id*)arg4 ;
-(BOOL)insertMediaTimeRange:(SCD_Struct_AV7)arg1 intoTimeRange:(SCD_Struct_AV7)arg2 ;
-(BOOL)appendMediaData:(id)arg1 dataOffset:(long long*)arg2 ;
@end

