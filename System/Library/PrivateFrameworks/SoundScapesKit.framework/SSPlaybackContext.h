/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:57 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SoundScapesKit.framework/SoundScapesKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SoundScapesKit/SoundScapesKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray;

@interface SSPlaybackContext : NSObject <NSSecureCoding, NSCopying> {

	BOOL _likeAffinity;
	NSString* _intentIdentifier;
	NSString* _endpointIdentifier;
	NSString* _sharedUserIdentifier;
	NSString* _mediaRouteIdentifier;
	NSArray* _airPlayRouteIDs;

}

@property (nonatomic,copy) NSString * intentIdentifier;                            //@synthesize intentIdentifier=_intentIdentifier - In the implementation block
@property (nonatomic,copy) NSString * endpointIdentifier;                          //@synthesize endpointIdentifier=_endpointIdentifier - In the implementation block
@property (nonatomic,copy) NSString * sharedUserIdentifier;                        //@synthesize sharedUserIdentifier=_sharedUserIdentifier - In the implementation block
@property (nonatomic,copy) NSString * mediaRouteIdentifier;                        //@synthesize mediaRouteIdentifier=_mediaRouteIdentifier - In the implementation block
@property (nonatomic,retain) NSArray * airPlayRouteIDs;                            //@synthesize airPlayRouteIDs=_airPlayRouteIDs - In the implementation block
@property (assign,getter=isLikeAffinity,nonatomic) BOOL likeAffinity;              //@synthesize likeAffinity=_likeAffinity - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)intentIdentifier;
-(NSString *)endpointIdentifier;
-(void)setEndpointIdentifier:(NSString *)arg1 ;
-(NSString *)mediaRouteIdentifier;
-(void)setMediaRouteIdentifier:(NSString *)arg1 ;
-(NSArray *)airPlayRouteIDs;
-(BOOL)isLikeAffinity;
-(void)setIntentIdentifier:(NSString *)arg1 ;
-(NSString *)sharedUserIdentifier;
-(void)setSharedUserIdentifier:(NSString *)arg1 ;
-(void)setAirPlayRouteIDs:(NSArray *)arg1 ;
-(void)setLikeAffinity:(BOOL)arg1 ;
@end

