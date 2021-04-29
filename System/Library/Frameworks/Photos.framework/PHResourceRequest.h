/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:55 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Photos.framework/Photos
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSURL;

@interface PHResourceRequest : NSObject <NSSecureCoding> {

	BOOL _wantsProgress;
	NSString* _taskIdentifier;
	NSURL* _assetObjectIDURL;

}

@property (nonatomic,readonly) NSString * taskIdentifier;              //@synthesize taskIdentifier=_taskIdentifier - In the implementation block
@property (nonatomic,readonly) NSURL * assetObjectIDURL;               //@synthesize assetObjectIDURL=_assetObjectIDURL - In the implementation block
@property (assign,nonatomic) BOOL wantsProgress;                       //@synthesize wantsProgress=_wantsProgress - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)taskIdentifier;
-(void)setWantsProgress:(BOOL)arg1 ;
-(BOOL)wantsProgress;
-(id)initWithTaskIdentifier:(id)arg1 assetObjectIDURL:(id)arg2 ;
-(id)initWithTaskIdentifier:(id)arg1 assetObjectID:(id)arg2 ;
-(NSURL *)assetObjectIDURL;
@end

