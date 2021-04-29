/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:37 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSDate, CLLocation;


@protocol PXMetadataAsset <NSObject>
@property (nonatomic,readonly) NSDate * creationDate; 
@property (nonatomic,readonly) CLLocation * location; 
@property (nonatomic,readonly) BOOL cloudIsDeletable; 
@optional
-(BOOL)cloudIsDeletable;

@required
-(NSDate *)creationDate;
-(CLLocation *)location;

@end
