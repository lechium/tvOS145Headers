/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:14 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>

@class NSString;

@interface _WKExperimentalFeature : NSObject <WKObject> {

	ObjectStorage<API::ExperimentalFeature> _experimentalFeature;

}

@property (nonatomic,copy,readonly) NSString * key; 
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,copy,readonly) NSString * details; 
@property (nonatomic,readonly) BOOL defaultValue; 
@property (getter=isHidden,nonatomic,readonly) BOOL hidden; 
@property (readonly) Object* _apiObject; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)name;
-(NSString *)description;
-(void)dealloc;
-(NSString *)key;
-(NSString *)details;
-(BOOL)defaultValue;
-(BOOL)isHidden;
-(Object*)_apiObject;
@end

