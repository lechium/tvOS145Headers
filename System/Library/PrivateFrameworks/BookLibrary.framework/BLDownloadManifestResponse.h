/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:07 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/BookLibrary.framework/BookLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface BLDownloadManifestResponse : NSObject <NSSecureCoding> {

	NSArray* _validDownloadIDs;

}

@property (nonatomic,copy) NSArray * validDownloadIDs;              //@synthesize validDownloadIDs=_validDownloadIDs - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)validDownloadIDs;
-(id)initWithSSDownloadManifestResponse:(id)arg1 ;
-(void)setValidDownloadIDs:(NSArray *)arg1 ;
@end

