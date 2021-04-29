/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:44 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <SearchFoundation/SFCommand.h>
#import <libobjc.A.dylib/SFIndexedUserActivityCommand.h>
@class NSString, NSDictionary, NSData;


@protocol SFIndexedUserActivityCommand <SFCommand>
@property (nonatomic,copy) NSString * userActivityRequiredString; 
@property (nonatomic,copy) NSString * applicationBundleIdentifier; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(NSDictionary *)dictionaryRepresentation;
-(NSString *)applicationBundleIdentifier;
-(void)setApplicationBundleIdentifier:(id)arg1;
-(NSString *)userActivityRequiredString;
-(NSData *)jsonData;
-(void)setUserActivityRequiredString:(id)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary, NSData;

@interface SFIndexedUserActivityCommand : SFCommand <SFIndexedUserActivityCommand, NSSecureCoding, NSCopying> {

	NSString* _userActivityRequiredString;
	NSString* _applicationBundleIdentifier;

}

@property (nonatomic,copy) NSString * userActivityRequiredString;                    //@synthesize userActivityRequiredString=_userActivityRequiredString - In the implementation block
@property (nonatomic,copy) NSString * applicationBundleIdentifier;                   //@synthesize applicationBundleIdentifier=_applicationBundleIdentifier - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(NSString *)applicationBundleIdentifier;
-(void)setApplicationBundleIdentifier:(NSString *)arg1 ;
-(NSString *)userActivityRequiredString;
-(id)initWithProtobuf:(id)arg1 ;
-(NSData *)jsonData;
-(void)setUserActivityRequiredString:(NSString *)arg1 ;
@end

