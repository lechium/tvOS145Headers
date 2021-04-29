/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:41 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString, NSNumber, PLSpatialOverCaptureInformation;


@protocol PLPTPTransferableAdditionalAssetAttributes <NSObject>
@property (nonatomic,copy,readonly) NSString * originatingAssetIdentifier; 
@property (nonatomic,retain,readonly) NSNumber * embeddedThumbnailHeight; 
@property (nonatomic,retain,readonly) NSNumber * embeddedThumbnailLength; 
@property (nonatomic,retain,readonly) NSNumber * embeddedThumbnailOffset; 
@property (nonatomic,retain,readonly) NSNumber * embeddedThumbnailWidth; 
@property (nonatomic,retain,readonly) NSString * exifTimestampString; 
@property (nonatomic,readonly) long long ptpTrashedState; 
@property (nonatomic,retain,readonly) PLSpatialOverCaptureInformation * spatialOverCaptureInformation; 
@required
-(long long)ptpTrashedState;
-(NSString *)exifTimestampString;
-(NSNumber *)embeddedThumbnailOffset;
-(NSString *)originatingAssetIdentifier;
-(NSNumber *)embeddedThumbnailHeight;
-(NSNumber *)embeddedThumbnailLength;
-(NSNumber *)embeddedThumbnailWidth;
-(PLSpatialOverCaptureInformation *)spatialOverCaptureInformation;

@end
