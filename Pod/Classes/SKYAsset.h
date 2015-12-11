//
//  SKYAsset.h
//  SKYKit
//
//  Copyright 2015 Oursky Ltd.
//
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.
//

#import <Foundation/Foundation.h>

@interface SKYAsset : NSObject

+ (instancetype)assetWithName:(NSString *)name fileURL:(NSURL *)fileURL;
+ (instancetype)assetWithName:(NSString *)name data:(NSData *)data;
+ (instancetype)assetWithFileURL:(NSURL *)fileURL;
+ (instancetype)assetWithData:(NSData *)data;

@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly, copy) NSURL *url;

- (instancetype)init NS_UNAVAILABLE;

@end
